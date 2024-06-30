#include "Cat.hpp"

/**
 *	Orthodox Canonical Form Class
 *	1. A default constructor that initializes the cat type value to "Cat".
 *	2. A copy constructor.
 *	3. A copy assignment operator overload.
 *	4. A destructor.
 *  ------------------------------
 *	
 *	5. Set their type field depending on their name
 *  6. Get
 *  7. Set
 *  8. Every animal must be able to use the member function: makeSound()
 */

/** --------------------
/ 1. A default constructor that initializes the cat type value to "Cat".
 */
Cat::Cat(void): _type("Cat")
{
	std::cout << GREEN << "(01)" << RESET << " Cat from Animal " << Animal::_type << " created with" << GREEN << " default constructor" << RESET << "." << std::endl;
}

/** --------------------
/ 2. A copy constructor.
 */
Cat::Cat(Cat const &copy): Animal(copy)
{
	*this = copy;
	std::cout << GREEN << "(02)" << RESET << " Cat from Animal " << Animal::_type << " copied." << std::endl;
}

/** --------------------
/ 3. A copy assignment operator overload.
 */
Cat const	&Cat::operator=(Cat const &copy)
{
	std::cout << GREEN << "(03)" << RESET << " Assignment operator for Cat from Animal " << Animal::_type << " called." << std::endl;
	Animal::operator=(copy);
	return (*this);
}

/** --------------------
/ 4. A destructor.
 */
Cat::~Cat(void)
{
	std::cout << GREEN << "(04)" << RESET << " Cat from Animal " << Animal::_type << " destroyed." << std::endl;
}


/** --------------------
/ 5. Set their type field to "Cat"
 */
Cat::Cat(std::string const &type):Animal(type), _type("Cat")
{
	std::cout << GREEN << "(05)" << RESET << " Cat from Animal typed as " << GREEN << Animal::_type << RESET << " created." << std::endl;
}

/** --------------------
/ 6. Get
 */
std::string const	&Cat::getType(void) const
{
	return (this->_type);
}

/** --------------------
/ 7. Set
 */
void	Cat::setType(const std::string &type)
{
	this->_type = type;
}

/** --------------------
/ 8. Every animal must be able to use the member function: makeSound()
 */
void	Cat::makeSound(void) const
{
	std::cout << GREEN << "(08)" << RESET << " Cat From Animal " << Animal::_type << "goes " << GREEN << ULINE << BOLD << "MIAU" << RESET << "!" << std::endl;
}