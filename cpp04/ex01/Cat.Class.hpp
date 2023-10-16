#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include "Animal.Class.hpp"
#include "Brain.Class.hpp"

class Cat : public Animal
{
    public:

        Cat( void );
        Cat( std::string name );
        virtual ~Cat( void );
	    
		virtual Cat	&operator=( Cat const &src );

		virtual void makeSound( void ) const;

    private:
    
        Brain   *_CatBrain;
};

#endif