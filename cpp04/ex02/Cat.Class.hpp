#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include "AAnimal.Class.hpp"
#include "Brain.Class.hpp"

class Cat : public AAnimal
{
	public:

		Cat( void );
		Cat( std::string name );
		Cat( const Cat &src );
		virtual ~Cat( void );
		
		Cat	&operator=( Cat const &src );

		virtual void makeSound( void ) const;

		virtual Brain*	getBrain() const;
		virtual void	setBrain(std::string idea);

	private:
	
		Brain   *_Brain;
};

#endif