#include "Animal.Class.hpp"
#include "Dog.Class.hpp"

Dog::Dog( void ) : Animal()
{
	std::cout << "default dog constructor called" << std::endl;

	this->_DogBrain = new Brain();

	return ;
}

Dog::Dog( std::string type ) : Animal(type)
{
	std::cout << "Dog constructor called" << std::endl;

	this->_DogBrain = new Brain();
	
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;

	delete this->_DogBrain;
	
	return ;
}

Dog	&Dog::operator=( Dog const &src )
{
	this->_Type = src._Type;
	this->_DogBrain = new Brain(*src._DogBrain);
	
	return *this;
}

void Dog::makeSound( void ) const
{
	std::cout << "WafWaf" << std::endl;

	return ;
}
