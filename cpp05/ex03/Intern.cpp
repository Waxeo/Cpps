#include "Intern.hpp"

Intern::Intern( void )
{
	return ;
}

Intern::Intern( Intern const &src )
{
	(void)src;
	return ;
}

Intern::~Intern( void )
{
	return ;
}

Intern	&Intern::operator=( Intern const &rhs )
{
	(void)rhs;
	return *this;
}

AForm	*Intern::makeForm(std::string form, std::string target)
{
	
}
