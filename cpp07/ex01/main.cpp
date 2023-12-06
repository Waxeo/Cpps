#include "iter.hpp"

void	plus_one(void *array, int index)
{
	array[index] += 1;
	return ;
}

int	main()
{
	std::string test = "abcdefghijklmnopqrstuvwxyz";

	::iter(test, test.size(), plus_one);

	return 0;
}