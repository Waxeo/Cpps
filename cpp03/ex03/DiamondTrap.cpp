#include "ClapTrap.Class.hpp"
#include "FragTrap.Class.hpp"
#include "ScavTrap.Class.hpp"
#include "DiamondTrap.Class.hpp"

DiamondTrap::DiamondTrap( std::string name ) :  ScavTrap(name), FragTrap(name), _Name(name + "_clap_name")
{
	std::cout << "DiamondTrap constructor called" << std::endl;

	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap &src )
{
	*this = src;

	return ;
}


DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);

	return ;
}

std::string		DiamondTrap::getName( void )
{
	return this->_Name;
}

int		DiamondTrap::getDamage( void )
{
	return this->_AttackDamage;
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name is "<< this->_Name << " whereas ClavTrap name is " << ClapTrap::_Name << std::endl;

	return ;
}
