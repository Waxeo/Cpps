#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:

		Ice(std::string name);
		Ice(Ice const &src);
		~Ice();

		Ice	&operator=(Ice const &rhs);

		virtual AMateria* clone() const;
};

#endif