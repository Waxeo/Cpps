#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <iomanip>
#include <string>

template <typename T>
void iter(T array, T size, T f)
{
	for (T i = 0; i < size; i++)
		f(array[i]);
}


#endif
