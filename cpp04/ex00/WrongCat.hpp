#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

/**
 *	Orthodox Canonical Form Class
 *	1. A default constructor that initializes the wrongCat type value to "WrongCat".
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

class WrongCat: public WrongAnimal
{
	private:
		std::string	_type;

	public:
		/* 1 */ WrongCat(void);
		/* 2 */ WrongCat(WrongCat const &copy);
		/* 3 */ WrongCat const	&operator=(WrongCat const &copy);
		/* 4 */ ~WrongCat(void);

		/* 5 */ WrongCat(std::string const &type);
		/* 6 */ std::string const	&getType(void) const;
		/* 7 */ void				setType(std::string const &type);
		/* 8 */ void	makeSound(void) const;
};

#endif
