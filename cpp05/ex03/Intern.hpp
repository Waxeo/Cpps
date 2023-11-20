#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

class AForm;

class Intern
{

	public:

		Intern( void );
		Intern( Intern const &src );
		~Intern( void );

		Intern	&	operator=( Intern const &rhs );

		AForm	*makeForm(std::string form, std::string target);
};

#endif