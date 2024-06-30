#include "WrongCat.hpp"

/**
 *	Orthodox Canonical Form Class
 *	1. 1. A default constructor that initializes the cat type value to "WrongCat".
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
/ 1. A default constructor that initializes the cat type value to "WrongCat".
 */
WrongCat::WrongCat(void): _type("WrongCat")
{
	std::cout << BLUE << "(01)" << RESET << " WrongCat from WrongAnimal " << WrongAnimal::_type << " created with" << BLUE << " default constructor" << RESET << "." << std::endl;
}

/** --------------------
/ 2. A copy constructor.
 */
WrongCat::WrongCat(WrongCat const &copy): WrongAnimal(copy)
{
	*this = copy;
	std::cout << BLUE << "(02)" << RESET << " WrongCat from WrongAnimal " << WrongAnimal::_type << " copied." << std::endl;
}

/** --------------------
/ 3. A copy assignment operator overload.
 */
WrongCat const	&WrongCat::operator=(WrongCat const &copy)
{
	std::cout << BLUE << "(03)" << RESET << " Assignment operator for WrongCat from WrongAnimal " << WrongAnimal::_type << " called." << std::endl;
	WrongAnimal::operator=(copy);
	return (*this);
}

/** --------------------
/ 4. A destructor.
 */
WrongCat::~WrongCat(void)
{
	std::cout << BLUE << "(04)" << RESET << " Cat from WrongAnimal " << WrongAnimal::_type << " destroyed." << std::endl;
}


/** --------------------
/ 5. Set their type field to "WrongCat"
 */
WrongCat::WrongCat(std::string const &type):WrongAnimal(type), _type("WrongCat")
{
	std::cout << BLUE << "(05)" << RESET << " WrongCat from WrongAnimal typed as " << BLUE << WrongAnimal::_type << RESET << " created." << std::endl;
}

/** --------------------
/ 6. Get
 */
std::string const	&WrongCat::getType(void) const
{
	return (this->_type);
}

/** --------------------
/ 7. Set
 */
void	WrongCat::setType(const std::string &type)
{
	this->_type = type;
}

/** --------------------
/ 8. Every wrongAnimal must be able to use the member function: makeSound()
 */
void	WrongCat::makeSound(void) const
{
	std::cout << BLUE << "(08)" << RESET << " WrongCat From WrongAnimal " << WrongAnimal::_type << "goes " << BLUE << ULINE << BOLD << "WRONG MIAU" << RESET << "!" << std::endl;
}