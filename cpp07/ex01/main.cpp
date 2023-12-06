#include "iter.hpp"

int	main()
{
	std::string test = "abcdefghijklmnopqrstuvwxyz";

	::iter(&test[0], test.size(), plus_one);

	std::cout << test << std::endl;

	int test2[] = { 1, 2, 3, 4};

	::iter(test2, 4, plus_one);

	for (size_t i = 0; i < 4; i++)
		std::cout << test2[i] << " ";
	
	return 0;
}