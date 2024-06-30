#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

/**
 *	Orthodox Canonical Form Class
 *	1. A default constructor that initializes the dog type value to "Dog".
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

class Dog: public Animal
{
	private:
		//std::string	_type;
		Brain	*_brain;

	public:
		/* 1 */ Dog(void);
		/* 2 */ Dog(Dog const &copy);
		/* 3 */ Dog const	&operator=(Dog const &copy);
		/* 4 */ ~Dog(void);

		//removed 5 to 8
		/* 5 Dog(std::string const &type);
		   6 std::string const	&getType(void) const;
		   7 void				setType(std::string const &type);
		   8 void	makeSound(void) const; */

		/* 5 */ Brain 	&getBrain(void) const;
		/* 6 */ void	setBrain(Brain const &brain);

};

#endif
