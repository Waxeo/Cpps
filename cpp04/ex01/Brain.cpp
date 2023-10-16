#include "Brain.Class.hpp"

Brain::Brain( void )
{
	std::cout << "default brain constructor called" << std::endl;
	
	return ;
}

Brain::Brain( Brain &src )
{
	// std::cout << "brain's copy constructor called" << std::endl;

	*this = src;

	return ;
}

Brain::~Brain( void )
{
	std::cout << "brain destructor called" << std::endl;

	return ;
}

Brain	&Brain::operator=( Brain const &src )
{
	// std::cout << "brain assignement operator called" << std::endl;

	for (int i = 0; i <= 100; i++)
		this->_ideas[i] = src._ideas[i];

	return *this;
}