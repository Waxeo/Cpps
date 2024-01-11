#ifndef RPN_HPP
# define RPN_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <map>
#include <stdlib.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[96m"

class RPN
{
	public:

        RPN( char **operation);
		~RPN( void );

        void plus(void);
        void minus(void);
        void mult(void);
        void div(void);


	private:

		RPN( void );
		RPN( RPN const &src );
		RPN	&	operator=( RPN const &rhs );


		std::stack<int, std::deque<int> > _calcul;


};



#endif