#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Colors.hpp"
# include "Brain.hpp"

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

class AAnimal
{
	protected:
		std::string	_type;
		Brain* _brain;

	public:
		/* 1 */ AAnimal(void);
		/* 2 */ AAnimal(AAnimal const &copy);
		/* 3 */ AAnimal const	&operator=(AAnimal const &copy);
		/* 4 */ virtual ~AAnimal(void);

		/* 5 */ AAnimal(std::string const &type);
		/* 6 */ std::string const	&getType(void) const;
		/* 7 */ void				setType(std::string const &type);
		/* 8 */ virtual void	makeSound(void) const = 0;
		/* 9 */ virtual Brain 		&getBrain(void) const = 0;
};

#endif
