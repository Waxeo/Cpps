#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include "Animal.Class.hpp"
#include "Brain.Class.hpp"

class Dog : public Animal
{
    public:

        Dog( void );
        Dog( std::string name );
        virtual ~Dog( void );
        
		virtual Dog	&operator=( Dog const &src );

		virtual void makeSound( void ) const;
    
    private:

        Brain   *_DogBrain;
};

#endif