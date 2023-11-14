#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:

		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string name, bool sign, int signgrade, int execgrade );
		PresidentialPardonForm( PresidentialPardonForm const &src );
		~PresidentialPardonForm( void );

		PresidentialPardonForm	&	operator=( PresidentialPardonForm const &rhs );

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

std::ostream	&	operator<<( std::ostream & o, PresidentialPardonForm const &rhs);


#endif