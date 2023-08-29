#include "Fixed.Class.hpp"

Fixed::Fixed( void ) : _RawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( Fixed const &src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

    return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;

    return ;
}

Fixed	&	Fixed::operator=( Fixed const &rhs )
{
	std::cout << "Assignement operator called" << std::endl;
	
	if ( this != &rhs )
		this->_RawBits = rhs.getRawBits();

	return *this;
}


int Fixed::getRawBits( void ) const
{
	std::cout << "Geter called" << std::endl;

	return this->_RawBits;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "Seter called" << std::endl;

	this->_RawBits = raw;

	return ;
}