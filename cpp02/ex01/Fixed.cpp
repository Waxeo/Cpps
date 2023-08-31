#include "Fixed.Class.hpp"


/*constructeurs / destructeurs*/

Fixed::Fixed( void ) : _Nb(0)
{
	std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( const int i ) : _Nb(i)
{
	std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed( const float f ) : _Nb(f)
{
	std::cout << "Float constructor called" << std::endl;
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




/*surcharge d'operateur*/

Fixed	&	Fixed::operator=( Fixed const &rhs )
{
	std::cout << "Assignement operator called" << std::endl;
	
	if ( this != &rhs )
		this->_Nb = rhs.getRawBits();

	return *this;
}

std::ostream	&	operator<<( std::ostream & o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}



/*accesseur*/

int Fixed::getRawBits( void ) const
{
	std::cout << "Geter called" << std::endl;

	return this->_Nb;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "Seter called" << std::endl;

	this->_Nb = raw;

	return ;
}



/*utils*/

float	Fixed::toFloat( void ) const
{

}





int	Fixed::toInt( void ) const
{
	static_cast<int>(this->_Nb);
}