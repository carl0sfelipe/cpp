#include "Cat.hpp"

/**
 *	Orthodox Canonical Form Class
 *	1. 1. A default constructor that initializes the cat type value to "Cat".
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
Cat::Cat(void): AAnimal("Cat")
{
	_brain = new Brain();
	std::cout << GREEN << "(01)" << RESET << " Cat from AAnimal " << GREEN << AAnimal::_type << RESET << " created with" << GREEN << " default constructor" << RESET << "." << std::endl;
}


/** --------------------
/ 2. A copy constructor.
 */
Cat::Cat(Cat const &copy): AAnimal(copy)
{
	this->_brain = new Brain(*copy._brain);
	std::cout << GREEN << "(02)" << RESET << " Cat from AAnimal " << AAnimal::_type << " copied." << std::endl;
}

/** --------------------
/ 3. A copy assignment operator overload.
 */
Cat const	&Cat::operator=(Cat const &copy)
{
	AAnimal::operator=(copy);
	*this->_brain = *copy._brain;
	std::cout << GREEN << "(03)" << RESET << " Assignment operator for Cat from AAnimal " << AAnimal::_type << " called." << std::endl;
	return (*this);
}

/** --------------------
/ 4. A destructor.
 */
Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << GREEN << "(04)" << RESET << " Cat from AAnimal " << AAnimal::_type << " destroyed." << std::endl;
}

/** --------------------
/ 5. Get Brain
 */
Brain &Cat::getBrain(void) const
{
	return (*this->_brain);
}

/** --------------------
/ 6. Set Brain
 */
void	Cat::setBrain(Brain const &brain)
{
	*this->_brain = brain;
}

void Cat::makeSound(void) const
{
    std::cout << GREEN << "(08) " << RESET << AAnimal::_type << " goes " << ULINE << BOLD << GREEN << "MIAU!" << RESET << std::endl;
}
