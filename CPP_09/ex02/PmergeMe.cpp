#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other)
	: _vector(other._vector), _deque(other._deque) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
	{
		_vector = other._vector;
		_deque = other._deque;
	}
	return ( *this );
}
void	PmergeMe::addNumber(int nb)
{
	_vector.push_back(nb);
	_deque.push_back(nb);
}

void	PmergeMe::insertSortVector(std::vector<int>& vec, int left, int right)
{
	for (int i = left + 1; i <= right; ++i)
	{
		int key = vec[i];
		int j = i - 1;
		while (j >= left && vec[j] > key)
		{
			vec[j + 1] = vec[j];
			--j;
		}
		vec[j + 1] = key;
	}
}

void	PmergeMe::insertSortDeque(std::deque<int>& deq, int left, int right)
{
	for (int i = left + 1; i <= right; ++i)
	{
		int key = deq[i];
		int j = i - 1;
		while (j >= left && deq[j] > key)
		{
			deq[j + 1] = deq[j];
			--j;
		}
		deq[j + 1] = key;
	}
}

void	PmergeMe::mergeVector(std::vector<int>& vec, int left, int mid, int right)
{
	size_t	i = left;
	size_t	j = mid + 1;
	size_t	k = 0;
	while (i <= mid && j <= right)
	{
		if (vec[i] <= vec[j])
			tmp[k++] = vec[i++];
		else
			tmp[k++] = vec[j++];
	}
	while (i <= mid)
		tmp[k++] = vec[i++];
	while (j <= right)
		tmp[k++] = vec[j++];
	for (size_t i = 0; i < k; ++i)
		vec[left + i] = tmp[i];
}
	{
		if (left[i] <= right[j])
			vec[k++] = left[i++];
		else
			vec[k++] = right[j++];
	}
	while (i < left.size())
		vec[k++] = left[i++];
	while (j < right.size())
		vec[k++] = right[j++];
}

void	PmergeMe::mergeDeque(std::deque<int>& deq, std::deque<int>& left, std::deque<int>& right)
{
	size_t	i = 0;
	size_t	j = 0;
	size_t	k = 0;
	while (i < left.size() && j < right.size())
	{
		if (left[i] <= right[j])
			deq[k++] = left[i++];
		else
			deq[k++] = right[j++];
	}
	while (i < left.size())
		deq[k++] = left[i++];
	while (j < right.size())
		deq[k++] = right[j++];
}

void	PmergeMe::mergeInsertSortVector( std::vector<int>& vec, int left, int right )
{
	if (left >= right)
		return ;
	if (right - left + 1 <= 10)
	{
		insertSortVector(vec, left, right);
		return ;
	}
	size_t	mid = (right - left) / 2;
	mergeInsertSortVector(vec, left, mid);
	mergeInsertSortVector(vec, mid + 1, right);
	mergeVector(vect, left, mid, right);
}

void	PmergeMe::mergeInsertSortDeque( std::deque<int>& deq, int left, int right )
{
	if (deq.empty())
		return ;
	if (deq.size() <= 10)
	{
		insertSortDeque(deq, 0, deq.size() - 1);
		return ;
	}
	size_t	mid = deq.size() / 2;
	std::deque<int>	left(deq.begin(), deq.begin() + mid);
	std::deque<int>	right(deq.begin() + mid, deq.end());
	mergeInsertSortDeque(left);
	mergeInsertSortDeque(right);
	mergeDeque(deq, left, right);
}

void	PmergeMe::sortAndMeasureTime()
{
	clock_t	startVec = clock();
	mergeInsertSortVector(_vector);
	clock_t	endVec = clock();
	double	timeVec = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1000000; // en microsecondes

	clock_t	startDeq = clock();
	mergeInsertSortDeque(_deque);
	clock_t	endDeq = clock();
	double	timeDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000; // en microsecondes

	std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " 
			  << std::fixed << std::setprecision(3) << timeVec << " us" << std::endl;
	std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : " 
			  << std::fixed << std::setprecision(3) << timeDeq << " us" << std::endl;
}

void	PmergeMe::printBeforeAndAfter()
{
	std::cout << "Before sorting: ";
	for (size_t i = 0; i < _vector.size(); ++i)
	{
		std::cout << _vector[i] << " ";
		if (i >= 19) // n'affiche que les 20 premiers éléments
		{
			std::cout << "...";
			break;
		}
	}
	std::cout << std::endl;

	std::cout << "After sorting:  ";
	for (size_t i = 0; i < _vector.size(); ++i)
	{
		std::cout << _vector[i] << " ";
		if (i >= 19) // n'affiche que les 20 premiers éléments
		{
			std::cout << "...";
			break;
		}
	}
	std::cout << std::endl;
}

PmergeMe::~PmergeMe() {}