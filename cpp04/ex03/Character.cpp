#include "Character.hpp"

Character::Character(std::string name) : _inventory(), _name(name), _idx(0)
{
	return ;
}

Character::Character(Character const &src) : _idx(src._idx)
{
	for (int i = 0; i <= src._idx; ++i)
            _inventory[i] = src._inventory[i]->clone();
}

Character::~Character()
{
	for (int i = 0; i <= _idx; i++)
		delete _inventory[i];
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
    {
        for (int i = 0; i <= _idx; ++i)
            delete _inventory[i];

        _idx = rhs._idx;

        for (int i = 0; i <= rhs._idx; ++i)
            _inventory[i] = rhs._inventory[i]->clone();
    }

    return *this;
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (this->_idx < 4)
	{
		_inventory[_idx] = m;
		_idx++;
	}
	else
		std::cout << "No empty slot for a new Materia" << std::endl;

	return ;
}

void Character::unequip(int idx)
 {
        if (idx < 0 || idx >= 4 || _inventory[idx] == nullptr)
        {
            // Indice invalide ou inventaire déjà vide, ne rien faire
            return;
        }

        // Libérer la Materia sans la supprimer
        _inventory[idx] = nullptr;
    }

void Character::use(int idx, ICharacter& target)
{
	if (_idx < idx)
		std::cout << "This slot contains no Materia" << std::endl;
	else
		_inventory[idx]->use(target);

	return ;
}