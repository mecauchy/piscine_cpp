#ifndef SPAN_HPP

#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <limits>

class Span
{
	public:
				Span();
				Span(unsigned int n);
				Span(const Span &other);
				Span &operator=(const Span &other);
				~Span();

				void	addNumber(int number);
				int		shortestSpan() const;
				int		longestSpan() const;

				template <typename InputIt>
				void addNumbers(InputIt begin, InputIt end)
				{
					if (std::distance(begin, end) + _numbers.size() > _maxSize)
						throw std::overflow_error("Adding these numbers would exceed the maximum size of the Span");
					_numbers.insert(_numbers.end(), begin, end);
				}
	private:
				std::vector<int>	_numbers;
				unsigned int		_maxSize;
};

#endif