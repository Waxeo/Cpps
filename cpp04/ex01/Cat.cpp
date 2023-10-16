#include "Cat.Class.hpp"

Cat::Cat( void ) : Animal()
{
	std::cout << "default cat constructor called" << std::endl;

	this->_CatBrain = new Brain();

	return ;
}

Cat::Cat( std::string name ) : Animal(name)
{
	std::cout << "Cat constructor called" << std::endl;

	this->_CatBrain = new Brain();

	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;

	delete this->_CatBrain;

	return ;
}

Cat	&Cat::operator=( Cat const &src )
{
	this->_Type = src._Type;
	this->_CatBrain = new Brain(*src._CatBrain);
	
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "MiaouMiaou" << std::endl;

	return ;
}