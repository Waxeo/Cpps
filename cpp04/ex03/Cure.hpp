#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(std::string name);
		Cure(Cure const &src);
		~Cure();

		Cure	&operator=(Cure const &rhs);

		virtual AMateria* clone() const;
};

#endif