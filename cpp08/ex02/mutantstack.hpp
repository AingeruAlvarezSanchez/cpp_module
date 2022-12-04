#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack<T>();
	MutantStack<T>(const MutantStack<T> &_copy);
	~MutantStack<T>();
	const MutantStack<T> &operator=(const MutantStack<T> &_copy);

	typedef typename MutantStack<T>::container_type::iterator                   iterator;
	typedef typename MutantStack<T>::container_type::reverse_iterator           reverse_iterator;
	iterator                     begin();
	iterator                     end();
	reverse_iterator             rbegin();
	reverse_iterator             rend();
};

#endif //MUTANTSTACK_HPP
