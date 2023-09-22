#include "Animal.Class.hpp"

Animal::Animal( void )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Animal::Animal( std::string type ) : _Type(type)
{
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal( Animal &src )
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Animal::~Animal( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Animal	&Animal::operator=( Animal const &src )
{
	// std::cout << "Assignement operator called" << std::endl;
	
	if ( this != &src )
		this->_Type = src._Type;

	return *this;
}

void	Animal::makeSound( void )
{
	std::cout << "oh jsuis bieng" << std::endl;

	return ;
}