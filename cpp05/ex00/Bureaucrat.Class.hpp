#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[5;96m"

class Bureaucrat
{
	public:

		Bureaucrat( void );
		Bureaucrat( Bureaucrat const &src );
		~Bureaucrat( void );

		Bureaucrat	&	operator=( Bureaucrat const &rhs );

		std::string		getName() const ;
		int			getGrade() const;

		class GradeTooHighException : public std::exception
		{
    		public:
        		GradeTooHighException(const std::string& message) : message(message) {}
       			virtual const char* what() const noexcept override {
            	return message.c_str();
        		}
		};

		class GradeTooLowException : public std::exception
		{
    		public:
        		GradeTooLowException(const std::string& message) : message(message) {}
       			virtual const char* what() const noexcept override {
            	return message.c_str();
        		}
		};

	private:

		const std::string _Name;
		int		_Grade;

};

std::ostream	&	operator<<( std::ostream & o, Fixed const &rhs);

#endif