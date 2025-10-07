#include "Span.hpp"

Span::Span() : _numbers(), _maxSize(0)
{
}

Span::Span(unsigned int n) : _numbers(), _maxSize(n)
{
}

Span::Span(const Span &other) : _numbers(other._numbers), _maxSize(other._maxSize)
{
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_numbers = other._numbers;
		_maxSize = other._maxSize;
	}
	return ( *this );
}

void	Span::addNumber(int number)
{
	if (_numbers.size() >= _maxSize)
		throw std::overflow_error("Cannot add more numbers, Span is full");
	_numbers.push_back(number);
}

int	Span::shortestSpan() const
{
	if (_numbers.size() < 2)
		throw std::logic_error("Not enough numbers to find a span");
	std::vector<int> sortedNumbers = _numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	int minSpan = std::numeric_limits<int>::max();
	for (std::size_t i = 1; i < sortedNumbers.size(); i++)
	{
		int span = sortedNumbers[i] - sortedNumbers[i - 1];
		if (span < minSpan)
			minSpan = span;
	}
	return (minSpan);
}

// std::max_element and std::min_element retourne une adresse dans le conteneur
int	Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw std::logic_error("Not enough numbers to find a span");
	int minNum = *std::min_element(_numbers.begin(), _numbers.end());
	int maxNum = *std::max_element(_numbers.begin(), _numbers.end());
	return (maxNum - minNum);
}

Span::~Span()
{
}