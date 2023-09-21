#ifndef DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP

#include "ClapTrap.Class.hpp"
#include "ScavTrap.Class.hpp"
#include "FragTrap.Class.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:

        DiamondTrap( std::string name );
        ~DiamondTrap( void );
	    void attack(const std::string& target);
        void highFivesGuys(void);

    private :

		std::string _Name;
        DiamondTrap( void );
};

#endif