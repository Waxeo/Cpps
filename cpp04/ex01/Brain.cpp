#include "Brain.Class.hpp"

Brain::Brain( void )
{
	std::cout << "default brain constructor called" << std::endl;
	
	return ;
}

Brain::Brain( Brain &src )
{
	std::cout << "brain's copy constructor called" << std::endl;

	if (*this != &)

}


Brain::~Brain( void )
{
	std::cout << "brain destructor called" << std::endl;

	return ;
}

Brain	&Brain::operator=( Brain const &src )
{

}