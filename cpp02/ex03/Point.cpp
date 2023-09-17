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
<<<<<<< HEAD
		(Fixed) this->_x = src._x;
		(Fixed) this->_y = src._y;
=======
		this->_x = src._x;
		this->_y = src._y;
>>>>>>> 82f4e30a1b905ba87ca1a3274c6925d0151a535a
    }

	return *this;
}
