#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <map>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[96m"

class BitcoinExchange
{
	public:
		BitcoinExchange( void );
		BitcoinExchange( BitcoinExchange const &src );
		~BitcoinExchange( void );

		BitcoinExchange	&	operator=( BitcoinExchange const &rhs );



	private:
		std::map<char,int> _BitcoinData;

}



#endif