#include "Span.hpp"

Span::Span( void ) : _N(10)
{
	return ;
}

Span::Span( unsigned int n ) : _N(n)
{
	return ;
}

Span::Span( Span const &src )
{
	*this = src;
	return ;
}

Span::~Span( void )
{
	return ;
}

void	Span::addNumber(int to_add)
{
	if (std::distance(this->_Array.begin(), this->_Array.end()) + 1 > this->_N)
		throw SpanAlreadyFullException();
	else
		this->_Array.push_back(to_add);
	
	return ;
}

int	Span::shortestSpan( void )
{
	std::vector<int>::const_iterator begin = this->_Array.begin();
	std::vector<int>::const_iterator end = this->_Array.end();
	int	shortest = std::distance(this->_Array.begin(), this->_Array.end());

	for (std::vector<int>::const_iterator it = begin; it < end; it++)
	{
		for (std::vector<int>::const_iterator it2 = it + 1; it2 < end; it2++)
		{
			if (std::distance(it, it2) < shortest)
				shortest = std::distance(it, it2);
		}
	}

	return shortest;
}

int	Span::longestSpan( void )
{
	std::vector<int>::const_iterator begin = this->_Array.begin();
	std::vector<int>::const_iterator end = this->_Array.end();
	int	longest = this->_Array[0] - this->_Array[1];

	for (std::vector<int>::const_iterator it = begin; it < end; it++)
	{
		for (std::vector<int>::const_iterator it2 = it + 1; it2 < end; it2++)
		{
				longest = std::min(this->_Array[it2]);
		}
	}

	return longest;
}

const char* Span::SpanAlreadyFullException::what() const throw()
{
	return "Span size exceeded";
}