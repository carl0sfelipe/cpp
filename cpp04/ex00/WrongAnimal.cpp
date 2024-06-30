#include "WrongAnimal.hpp"

/**
 *	Orthodox Canonical Form Class
 *	1. A default constructor that initializes the wrongAnimal type to "undefined".
 *	2. A copy constructor.
 *	3. A copy assignment operator overload.
 *	4. A destructor.
 *  ------------------------------
 *	
 *	5. Set their type field depending on their name
 *  6. Get
 *  7. Set
 *  8. Every wrongAnimal must be able to use the member function: makeSound()
 */

/** --------------------
/ 1. A default constructor that initializes the wrongAnimal type to "undefined".
 */
WrongAnimal::WrongAnimal(void): _type("WithNoType")
{
	std::cout << ORANGE << "(01)" << RESET << " WrongAnimal " << ORANGE << this->_type << RESET << " created with " << ORANGE << "default constructor" << RESET << "." << std::endl;
}

/** --------------------
/ 2. A copy constructor.
 */
WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
	std::cout << ORANGE << "(02)" << RESET << " WrongAnimal " << this->_type << " copied." << std::endl;
}

/** --------------------
/ 3. A copy assignment operator overload.
 */
WrongAnimal const	&WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << ORANGE << "(03)" << RESET << " Assignment operator for WrongAnimal" << this->_type << " called." << std::endl;
	this->_type = copy.getType();
	return (*this);
}

/** --------------------
/ 4. A destructor.
 */
WrongAnimal::~WrongAnimal(void)
{
	std::cout << ORANGE << "(04)" << RESET << " WrongAnimal " << this->_type << " destroyed." << std::endl;
}

/** --------------------
/ 5. Set their type field depending on their name
 */
WrongAnimal::WrongAnimal(std::string const &type): _type(type)
{
	std::cout << ORANGE << "(05)" RESET << " WrongAnimal typed as " << ORANGE <<  this->_type << RESET << " created." << std::endl;
}

/** --------------------
/ 6. Get
 */
std::string const	&WrongAnimal::getType(void) const
{
	return (this->_type);
}

/** --------------------
/ 7. Set
 */
void	WrongAnimal::setType(const std::string &type)
{
	this->_type = type;
}

/** --------------------
/ 8. Every wrongAnimal must be able to use the member function: makeSound()
 */
void	WrongAnimal::makeSound(void) const
{
	std::cout << ORANGE << "(08)" << RESET << " WrongAnimal " << this->_type << " " << ULINE << BOLD << ORANGE << "made a sound!" << RESET << std::endl;
}