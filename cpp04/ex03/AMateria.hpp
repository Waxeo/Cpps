#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string const type;
	public:
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif