#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

#include "ClapTrap.Class.hpp"

class ScavTrap : public ClapTrap 
{
    public:

        ScavTrap( std::string name );
        ~ScavTrap( void );
	    void attack(const std::string& target);
        void guardGate( void );

    private :
        ScavTrap( void );
};

#endif