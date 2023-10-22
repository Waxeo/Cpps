#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

#include "WrongAnimal.Class.hpp"

class WrongCat : public WrongAnimal
{
    public:

        WrongCat( void );
        WrongCat( std::string name );
        virtual ~WrongCat( void );
	    
		WrongCat	&operator=( WrongCat const &src );

		virtual void makeSound( void ) const;
};

#endif