#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

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

class Cat: public Animal
{
	private:
		std::string	_type;

	public:
		/* 1 */ Cat(void);
		/* 2 */ Cat(Cat const &copy);
		/* 3 */ Cat const	&operator=(Cat const &copy);
		/* 4 */ ~Cat(void);

		/* 5 */ Cat(std::string const &type);
		/* 6 */ std::string const	&getType(void) const;
		/* 7 */ void				setType(std::string const &type);
		/* 8 */ void	makeSound(void) const;
};

#endif
