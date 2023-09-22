#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include "Animal.Class.hpp"

class Cat : public Animal
{
    public:

        Cat( void );
        Cat( std::string name );
        ~Cat( void );
	    
		Cat	&operator=( Cat const &src );

		virtual void makeSound( void ) const;
};

#endif