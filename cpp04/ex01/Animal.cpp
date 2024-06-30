#include "Animal.hpp"

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
Animal::Animal(void): _type("WithNoType")
{
	std::cout << RED << "(01)" << RESET << " Animal " << RED << this->_type << RESET << " created with " << RED << "default constructor" << RESET << "." << std::endl;
}

/** --------------------
/ 2. A copy constructor.
 */
Animal::Animal(Animal const &copy)
{
	*this = copy;
	std::cout << RED << "(02)" << RESET << " Animal " << this->_type << " copied." << std::endl;
}

/** --------------------
/ 3. A copy assignment operator overload.
 */
Animal const	&Animal::operator=(Animal const &copy)
{
	this->_type = copy.getType();
	std::cout << RED << "(03)" << RESET << " Assignment operator for Animal" << this->_type << " called." << std::endl;
	return (*this);
}

/** --------------------
/ 4. A destructor.
 */
Animal::~Animal(void)
{
	std::cout << RED << "(04)" << RESET << " Animal " << this->_type << " destroyed." << std::endl;
}

/** --------------------
/ 5. Set their type field depending on their name
 */
Animal::Animal(std::string const &type): _type(type)
{
	std::cout << RED << "(05)" RESET << " Animal typed as " << RED <<  this->_type << RESET << " created." << std::endl;
}

/** --------------------
/ 6. Get
 */
std::string const	&Animal::getType(void) const
{
	return (this->_type);
}

/** --------------------
/ 7. Set
 */
void	Animal::setType(const std::string &type)
{
	this->_type = type;
}

/** --------------------
/ 8. Every animal must be able to use the member function: makeSound()
 */
void	Animal::makeSound(void) const
{
	std::cout << RED << "(08)" << RESET " Animal " << this->_type << " " << ULINE << BOLD << RED << "made a sound!" << RESET << std::endl;
}

Brain& Animal::getBrain(void) const {
    // Aqui você deve retornar o Brain adequado para cada instância de Animal
    // Por exemplo, se você tiver um atributo Brain* _brain em Animal, você pode retorná-lo aqui
    return *_brain; // Exemplo hipotético
}


