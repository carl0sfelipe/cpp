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
Dog::Dog(void): Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << YELLOW << "(01)" << RESET << " Dog from Animal " << YELLOW << Animal::_type << RESET << " created with" << YELLOW << " default constructor" << RESET << "." << std::endl;
}


/** --------------------
/ 2. A copy constructor.
 */
Dog::Dog(Dog const &copy): Animal(copy)
{
	this->_brain = new Brain(*copy._brain);
	std::cout << YELLOW << "(02)" << RESET << " Dog from Animal " << Animal::_type << " copied." << std::endl;
}

/** --------------------
/ 3. A copy assignment operator overload.
 */
Dog const	&Dog::operator=(Dog const &copy)
{
	Animal::operator=(copy);
	*this->_brain = *copy._brain;
	std::cout << YELLOW << "(03)" << RESET << " Assignment operator for Dog from Animal " << Animal::_type << " called." << std::endl;
	return (*this);
}

/** --------------------
/ 4. A destructor.
 */
Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << YELLOW << "(04)" << RESET << " Dog from Animal " << Animal::_type << " destroyed." << std::endl;
}

/** --------------------
/ 5. Get Brain
 */
Brain &Dog::getBrain(void) const
{
	return (*this->_brain);
}

/** --------------------
/ 6. Set Brain
 */
void	Dog::setBrain(Brain const &brain)
{
	*this->_brain = brain;
}