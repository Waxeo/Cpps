#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"

class AForm
{
	public:

		AForm( void );
		AForm( std::string name, bool sign, int signgrade, int execgrade );
		AForm( AForm const &src );
		~AForm( void );

		AForm	&	operator=( AForm const &rhs );

		std::string		getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

		virtual void	beSigned(Bureaucrat &bureaucrat) = 0;

		class GradeTooHighException : public std::exception
		{
    		public:
       			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
    		public:
       			virtual const char* what() const throw();
		};

	private:

		const std::string _Name;
		bool	_Signed;
		const int		_SignGrade;
		const int		_ExecGrade;
};

std::ostream	&	operator<<( std::ostream & o, AForm const &rhs);


#endif