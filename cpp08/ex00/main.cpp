#include "easyfind.hpp"

int main()
{
	try
	{
		std::cout << GREEN << "Test with occurence from vector" << RESET << std::endl;
		std::vector<int> test;

		for (size_t i = 0; i < 5; i++)
			test.push_back(i + 1);

		easyfind(test, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << GREEN << "Test with no occurence from list" << RESET << std::endl;
		std::list<int> test2;

		for (size_t i = 0; i < 5; i++)
			test2.push_back(i + 1);

		easyfind(test2, 9);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}