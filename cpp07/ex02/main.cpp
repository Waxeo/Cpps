#include "Array.hpp"

int	main()
{
	Array<int> test(5);

	std::cout << GREEN << "Array size = " << test.size() << RESET << std::endl;
	std::cout << std::endl;


	std::cout << GREEN << "Assignment of values." << RESET << std::endl;
	for (size_t i = 0; i < 5; i++)
		test[i] = 7;
	test[3] = 2;

	std::cout << "array1 : ";
	for (size_t i = 0; i < 5; i++)
		std::cout << test[i] << ", ";

	std::cout << std::endl << std::endl;


	std::cout << GREEN << "Trying Bad index : -1" << RESET << std::endl;
	try
	{
		std::cout << test[-1] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;


	std::cout << GREEN << "Copying the array." << RESET << std::endl;

	Array<int> test2;
	Array<int> test3(test);

	test2 = test;

	std::cout << "array2 : ";
	for (size_t i = 0; i < 5; i++)
		std::cout << test2[i] << ", ";
	
	std::cout << std::endl;

	std::cout << "array3 : ";
	for (size_t i = 0; i < 5; i++)
		std::cout << test3[i] << ", ";

	std::cout << std::endl << std::endl;

	std::cout << GREEN << "Values modification." << RESET << std::endl;

	test2[1] = 13;
	test3[0] = 42;

	std::cout << "array1 : ";
	for (size_t i = 0; i < 5; i++)
		std::cout << test[i] << ", ";

	std::cout << std::endl;
	

	std::cout << "array2 : ";
	for (size_t i = 0; i < 5; i++)
		std::cout << test2[i] << ", ";

	std::cout << std::endl;

	std::cout << "array3 : ";
	for (size_t i = 0; i < 5; i++)
		std::cout << test3[i] << ", ";
	
	return 0;
}
