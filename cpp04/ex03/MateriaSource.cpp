#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _learned(), _index(0)
{
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &src) : _index(src._index)
{
    for (int i = 0; i <= src._index; ++i)
        learnMateria(src._learned[i]);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i <= _index; i++)
		delete _learned[i];
	return ;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i <= _index; ++i)
            delete _learned[i];

        _index = rhs._index;

        for (int i = 0; i <= rhs._index; ++i)
            learnMateria(rhs._learned[i]);
    }

    return *this;
}

void 	MateriaSource::learnMateria(AMateria* f)
{
	if (_index < 4 && f)
	{
		_learned[_index] = f;
		_index++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i <= _index; ++i)
    {
        if (_learned[i]->getType() == type)
            return _learned[i]->clone();
    }

    return NULL;
}