#include "ScalarConverter.hpp"

bool	isChar(std::string base)
{
	if (base.size() != 1)
		return false;
	
	if (base[0] >= 65 && base[0] <= 90)
		return true;

	if (base[0] >= 97 && base[0] <= 122)
		return true;

	return false;
}

bool	isInt(std::string base)
{
	size_t minus = 0;

	if (base[minus] == 45)
		minus++;

	for (size_t i = 0 + minus; i < base.size(); i++)
	{
		if (!isdigit(base[i]))
			return false;
	}
	
    int value = atoi(base.c_str());

	if (value == 0 && base[base.size() - 1] != 48)
		return false;

	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min()) 
		return false;
	return true;

}

bool	isFloat(std::string base)
{
	size_t minus = 0;
	int	dot = 0;

	if (base[minus] == 45)
		minus++;

	for	(size_t i = 0 + minus; i < base.size(); i++)
	{
		if (!isdigit(base[i]) && base[i] != 46 && base[i] != 102)
			return false;
		if (base[i] == 46)
			dot++;
	}

	if (dot != 1)
		return false;
	if (base[base.size() - 1] != 102 || !isdigit(base[base.size() - 2]))
		return false;
	return true;
}

bool	isDouble(std::string base)
{
	size_t	i = 0; 
	int	dot = 0;

	if (base[i] == 45)
		i++;
	for	(size_t x = 0 + i; x < base.size(); x++)
	{
		if (!isdigit(base[x]) && base[x] != 46)
			return false;
		if (base[x] == 46)
			dot++;
	}
	if (dot != 1)
		return false;
	if (!isdigit(base[base.size() - 1]))
		return false;
	return true;
}

void	ScalarConverter::convert(std::string base)
{
	bool test;

	test = isChar(base);

	if (test == true)
		std::cout << "isoke" << std::endl;
	else
		std::cout << "notoke" << std::endl;




	bool test1;

	test1 = isInt(base);

	if (test1 == true)
		std::cout << "isoke" << std::endl;
	else
		std::cout << "notoke" << std::endl;





	bool test2;

	test2 = isFloat(base);

	if (test2 == true)
		std::cout << "isoke" << std::endl;
	else
		std::cout << "notoke" << std::endl;




	bool test3;

	test3 = isDouble(base);

	if (test3 == true)
		std::cout << "isoke" << std::endl;
	else
		std::cout << "notoke" << std::endl;



	return ;
}





