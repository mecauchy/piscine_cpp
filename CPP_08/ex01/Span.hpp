#ifndef SPAN_HPP

#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
	public:
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void addNumber(int number);
		int shortestSpan() const;
		int longestSpan() const;

	private:
		std::vector<int> _numbers;
		unsigned int _maxSize;
};

#endif