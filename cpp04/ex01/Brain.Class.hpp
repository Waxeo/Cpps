#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include "Animal.Class.hpp"

class Brain
{
    public:

        Brain( void );
		Brain( Brain &src );
        virtual ~Brain( void );
        
		Brain	&operator=( Brain const &src );
	
	private:
	
		std::string _ideas[100];
};

#endif