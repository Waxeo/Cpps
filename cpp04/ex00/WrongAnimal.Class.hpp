#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[5;96m"

class WrongAnimal
{
    public:

        WrongAnimal( std::string name );
        ~WrongAnimal( void );
	    void attack(const std::string& target);
        void guardGate( void );

    private :
        WrongAnimal( void );
};

#endif