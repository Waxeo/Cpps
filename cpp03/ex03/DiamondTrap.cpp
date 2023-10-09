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

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

void DiamondTrap::attack(const std::string& target)
{
	if (this->_HitPoints == 0)
	{
		std::cout << "DiamondTrap " << this->_Name << " is dead." << std::endl; ;
		return ;
	}
	if (this->_EnergyPoints > 0)
	{
		std::cout << BLUE << "DiamondTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << RESET << std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << RED << "DiamondTrap " << this->_Name << " needs energy to do an action" << RESET << std::endl;

	std::cout << this->_EnergyPoints << " Energy points remaining for " << this->_Name << std::endl;

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