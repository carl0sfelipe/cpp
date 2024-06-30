#include "Brain.hpp"

/**
 *	Orthodox Canonical Form Class
 *	1. A default constructor that initializes the brain type to "undefined".
 *	2. A copy constructor.
 *	3. A copy assignment operator overload.
 *	4. A destructor.
 *  ------------------------------
 *	
 *	5. Get
 *  6. Set
 */

/** --------------------
/ 1. A default constructor.
 */
Brain::Brain(void)
{
	std::cout << BLUE << "(01)" << RESET << " Brain created with default constructor." << std::endl;
}

/** --------------------
/ 2. A copy constructor.
 */
Brain::Brain(Brain const &copy)
{
	*this = copy;
	std::cout << BLUE << "(02)" << RESET << " Brain copied." << std::endl;
}

/** --------------------
/ 3. A copy assignment operator overload.
 */
Brain const	&Brain::operator=(Brain const &copy)
{
	std::copy(copy._ideas, copy._ideas + 100, this->_ideas);
	std::cout << BLUE << "(03)" << RESET << " Assignment operator for Brain called." << std::endl;
	return (*this);
}

/** --------------------
/ 4. A destructor.
 */
Brain::~Brain(void)
{
	std::cout << BLUE << "(04)" << RESET << " Brain destroyed." << std::endl;
}

/** --------------------
/ 5. Get
 */
std::string const	&Brain::getIdea(int const &index) const
{
	if (index >= 0 && index < 100)
		return (this->_ideas[index]);
	return (this->_ideas[0]);
}

/** --------------------
/ 6. Set
 */
void	Brain::setIdea(std::string const &idea, int const &index)
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
}