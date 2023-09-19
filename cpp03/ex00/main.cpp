#include "ClapTrap.Class.hpp"

int main ( void )
{
    ClapTrap first("Billy");
    ClapTrap second("Bob");

    first.attack(second.getName());
    second.takeDamage(2);

    second.beRepaired(1);

    return 0;
}
