#include "Animal.Class.hpp"
#include "Dog.Class.hpp"

Dog::Dog( void ) : Animal()
{
	std::cout << "default dog constructor called" << std::endl;

	return ;
}

Dog::Dog( std::string type ) : Animal(type)
{
	std::cout << "Dog constructor called" << std::endl;

	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

Dog	&Dog::operator=( Dog const &src )
{
	this->_Type = src._Type;
	
	return *this;
}

void Dog::makeSound( void )
{
	std::cout << "WafWaf" << std::endl;

	return ;
}
