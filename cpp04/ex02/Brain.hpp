#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Colors.hpp"

/**
 *	Orthodox Canonical Form Class
 *	1. A default constructor that initializes the brain type to "undefined".
 *	2. A copy constructor.
 *	3. A copy assignment operator overload.
 *	4. A destructor.
 *  ------------------------------
 *	
 *  5. Get
 *  6. Set
 */

class Brain
{
	protected:
		std::string	_ideas[100];

	public:
		/* 1 */ Brain(void);
		/* 2 */ Brain(Brain const &copy);
		/* 3 */ Brain const	&operator=(Brain const &copy);
		/* 4 */ virtual ~Brain(void);

		/* 5 */ std::string const	&getIdea(int const &index) const;
		/* 6 */ void				setIdea(std::string const &idea, int const &index);
};

#endif