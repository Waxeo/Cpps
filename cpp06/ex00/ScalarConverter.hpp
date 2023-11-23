#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <limits>

class ScalarConverter
{
	public:

		static void	convert(std::string base);
		
	private:

		ScalarConverter( void );
		ScalarConverter( ScalarConverter const &src );
		~ScalarConverter( void );
		ScalarConverter	&	operator=( ScalarConverter const &rhs );
	
};

#endif