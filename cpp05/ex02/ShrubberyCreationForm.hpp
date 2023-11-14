#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:

		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string name, bool sign, int signgrade, int execgrade );
		ShrubberyCreationForm( ShrubberyCreationForm const &src );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm	&	operator=( ShrubberyCreationForm const &rhs );

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

std::ostream	&	operator<<( std::ostream & o, ShrubberyCreationForm const &rhs);


#endif