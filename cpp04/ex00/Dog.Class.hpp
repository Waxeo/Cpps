#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include "Animal.Class.hpp"

class Dog : public Animal
{
    public:

        Dog( void );
        Dog( std::string name );
        ~Dog( void );
        
		Dog	&operator=( Dog const &src );

		virtual void makeSound( void ) const;
};

#endif