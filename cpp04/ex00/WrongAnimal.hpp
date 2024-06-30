#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>
# include "Colors.hpp"

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
 */

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		/* 1 */ WrongAnimal(void);
		/* 2 */ WrongAnimal const   &operator=(WrongAnimal const &copy);
		/* 3 */ WrongAnimal(WrongAnimal const &copy);
		/* 4 */ virtual ~WrongAnimal(void);

		/* 5 */ WrongAnimal(std::string const &type);
		/* 6 */ std::string const   &getType(void) const;
		/* 7 */ void                setType(std::string const &type);
		/* 8 */ void    makeSound(void) const;
};

#endif
