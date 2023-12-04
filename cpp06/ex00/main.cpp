#include "ScalarConverter.hpp"

std::string	stringconverter(char *arg)
{
	std::string r(arg);

	return r;
}

int main(int ac, char **av)
{
	(void)ac;
	std::cout << av[1] << std::endl;
	std::string test = stringconverter(av[1]);

	ScalarConverter::convert(test);

	return (0);
}