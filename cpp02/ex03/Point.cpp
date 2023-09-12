#include "Point.Class.hpp"

Point::Point( void ) : _x(0), _y(0)
{
	// std::cout << "Default constructor called" << std::endl;
    return ;
}

Point::Point( const float X, const float Y ) : _x(X), _y(Y)
{
	// std::cout << "Float constructor called" << std::endl;
    return ;
}

Point::Point( Point const &src )
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;

    return ;
}

Point::~Point( void )
{
	// std::cout << "Destructor called" << std::endl;

    return ;
}

Point	&	Point::operator=( Point const &src ) 
{
	// std::cout << "Assignement operator called" << std::endl;
	
	if ( this != &src )
    {
		this->_x = src.getx();
		this->_y = src.gety();
    }

	return *this;
}

const   Fixed Point::getx( void ) const
{
    return this->_x;
}

const   Fixed Point::gety( void ) const
{
    return this->_y;
}
