#include "Dog.hpp"

/**
 *	Orthodox Canonical Form Class
 *	1. 1. A default constructor that initializes the dog type value to "Dog".
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
/ 1. A default constructor that initializes the dog type value to "Dog".
 */
Dog::Dog(void): _type("Dog")
{
	std::cout << YELLOW << "(01)" << RESET << " Dog from Animal " << YELLOW << Animal::_type << RESET << " created with" << YELLOW << " default constructor" << RESET << "." << std::endl;
}


/** --------------------
/ 2. A copy constructor.
 */
Dog::Dog(Dog const &copy): Animal(copy)
{
	*this = copy;
	std::cout << YELLOW << "(02)" << RESET << " Dog from Animal " << Animal::_type << " copied." << std::endl;
}

/** --------------------
/ 3. A copy assignment operator overload.
 */
Dog const	&Dog::operator=(Dog const &copy)
{
	std::cout << YELLOW << "(03)" << RESET << " Assignment operator for Dog from Animal " << Animal::_type << " called." << std::endl;
	Animal::operator=(copy);
	return (*this);
}

/** --------------------
/ 4. A destructor.
 */
Dog::~Dog(void)
{
std::cout << YELLOW << "(04)" << RESET << " Dog from Animal " << Animal::_type << " destroyed." << std::endl;
}


/** --------------------
/ 5. Set their type field to "Dog"
 */
Dog::Dog(std::string const &type):Animal(type), _type("Dog")
{
	std::cout << YELLOW << "(05)" << RESET " Dog from Animal typed as " << YELLOW << Animal::_type << RESET << " created." << std::endl;
}

/** --------------------
/ 6. Get
 */
std::string const	&Dog::getType(void) const
{
	return (this->_type);
}

/** --------------------
/ 7. Set
 */
void	Dog::setType(const std::string &type)
{
	this->_type = type;
}

/** --------------------
/ 8. Every animal must be able to use the member function: makeSound()
 */
void	Dog::makeSound(void) const
{
	std::cout << YELLOW << "(08)" << RESET << " Dog From Animal " << "goes " << YELLOW << ULINE << BOLD << "AUAU" << RESET << "!" << std::endl;
}