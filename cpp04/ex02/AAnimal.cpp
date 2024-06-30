#include "AAnimal.hpp"

/**
 *	Orthodox Canonical Form Class
 *	1. A default constructor that initializes the animal type to "undefined".
 *	2. A copy constructor.
 *	3. A copy assignment operator overload.
 *	4. A destructor.
 *  ------------------------------
 *	
 *	5. Set their type field depending on their name
 *  6. Get
 *  7. Set
 *  8. Every animal must be able to use the member function: makeSound()
 *  9. Get Brain
 */

/** --------------------
/ 1. A default constructor that initializes the animal type to "undefined".
 */
AAnimal::AAnimal(void): _type("WithNoType")
{
	std::cout << RED << "(01)" << RESET << " AAnimal " << RED << this->_type << RESET << " created with " << RED << "default constructor" << RESET << "." << std::endl;
}

/** --------------------
/ 2. A copy constructor.
 */
AAnimal::AAnimal(AAnimal const &copy)
{
	*this = copy;
	std::cout << RED << "(02)" << RESET << " AAnimal " << this->_type << " copied." << std::endl;
}

/** --------------------
/ 3. A copy assignment operator overload.
 */
AAnimal const	&AAnimal::operator=(AAnimal const &copy)
{
	this->_type = copy.getType();
	std::cout << RED << "(03)" << RESET << " Assignment operator for AAnimal" << this->_type << " called." << std::endl;
	return (*this);
}

/** --------------------
/ 4. A destructor.
 */
AAnimal::~AAnimal(void)
{
	std::cout << RED << "(04)" << RESET << " AAnimal " << this->_type << " destroyed." << std::endl;
}

/** --------------------
/ 5. Set their type field depending on their name
 */
AAnimal::AAnimal(std::string const &type): _type(type)
{
	std::cout << RED << "(05)" RESET << " AAnimal typed as " << RED <<  this->_type << RESET << " created." << std::endl;
}

/** --------------------
/ 6. Get
 */
std::string const	&AAnimal::getType(void) const
{
	return (this->_type);
}

/** --------------------
/ 7. Set
 */
void	AAnimal::setType(const std::string &type)
{
	this->_type = type;
}

/** --------------------
/ 8. Every animal must be able to use the member function: makeSound()
 */
void	AAnimal::makeSound(void) const
{
	std::cout << RED << "(08)" << RESET " AAnimal " << this->_type << " " << ULINE << BOLD << RED << "made a sound!" << RESET << std::endl;
}

/*Brain& AAnimal::getBrain(void) const
{
    return *_brain; // Exemplo hipotético
}*/