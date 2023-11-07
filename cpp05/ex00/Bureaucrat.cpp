#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _Grade(150), _Name("Default")
{
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _Name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	else
		this->_Grade = grade;
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
		this->_Grade = rhs.getGrade();

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

bool Bureaucrat::TryIncrement( void )
{
	if (this->_Grade - 1 < 1)
		return false;
	return true;
}

bool Bureaucrat::TryDecrement( void )
{
	if (this->_Grade + 1 > 150)
		return false;
	return true;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	std::cout << "Grade too high" << std::endl;
	return ;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	std::cout << "Grade too low" << std::endl;
	return ;
}

std::ostream	&operator<<( std::ostream & o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;

	return o;
}
