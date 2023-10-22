#include "Bureaucrat.Class.hpp"

Bureaucrat::Bureaucrat( void ) : 
{
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const &src )
{
	*this = src;

	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	return ;
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const &rhs )
{
	if (this != &rhs)
	{
		
	}

	return ;
}

std::string		Bureaucrat::getName() const 
{
	return this->_Name;
}

int		Bureaucrat::getGrade() const
{
	return this->_Grade;
}

std::ostream	&operator<<( std::ostream & o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;

	return o;
}
