#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	(void)ac;
	std::string test = av[1];

	ScalarConverter::convert(test);

	return (0);
}