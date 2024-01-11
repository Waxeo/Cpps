#ifndef PMERGEME_HPP
# define PMERGEME_HPP

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

class PmergeMe
{
	public:
		PmergeMe( void );
		~PmergeMe( void );

		void	extractAndExec(char *fdsName);
		void	OutputManagement(std::string date, float value);

	private:
		PmergeMe( PmergeMe const &src );
		PmergeMe	&	operator=( PmergeMe const &rhs );


		std::map<std::string, float> _BitcoinData;


};



#endif

en gros division par recursion jusqua avoir des paires.
tu mets les plus gros de chaques paires dun coté de la paire. 
ensuite tu sépares en deux liste avec les plus gros dun coté
et les plus petits de lautres. les plus gros doivent etre trié
dans lordre. ensuite en utilisant la suite de jacobstahl tu
fais un binary un sort