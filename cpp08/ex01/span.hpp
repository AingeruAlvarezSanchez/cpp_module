#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>

class Span
{
private:
	std::vector<int>	_vectorOfIntegers;
	unsigned int		_numberOfElements;
public:
	Span();
	Span(unsigned int _numberOfElements);
	Span(const Span &_copy);
	~Span();
	const Span	&operator=(const Span &_copy);
	void		addNumber(unsigned int _newNumber);
	int			shortestSpan(void);
	int			longestSpan(void) const;
	void		generateNewVector(unsigned int _numberOfElements);
};

#endif //SPAN_HPP