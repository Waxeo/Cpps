#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include "Animal.Class.hpp"
#include "Brain.Class.hpp"

class Dog : public Animal
{
    public:

        Dog( void );
        Dog( std::string name );
		Dog( const Dog &src );
        virtual ~Dog( void );
        
		Dog	&operator=( Dog const &src );

		virtual void makeSound( void ) const;

		virtual Brain*	getBrain() const;
		virtual void	setBrain(std::string idea);
    
    private:

        Brain   *_Brain;
};

#endif