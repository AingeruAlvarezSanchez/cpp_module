#include "mutantstack.cpp"
#include <iostream>
#include <list>

int main()
{
	std::cout << "--- MutantStack testing ---" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "The top element of the LIFO stack: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of the LIFO stack after pop: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	std::cout << "First element of the LIFO stack as iterator: " << *it << std::endl;
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "Last element of the LIFO stack as iterator: " << *ite << std::endl;
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "Content of the LIFO stack node: " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "copy LIFO stack size: " << s.size() << " || Mutant LIFO stack size: " << mstack.size() << std::endl;
	std::cout << "--- Reverse iterators ---" << std::endl;
	MutantStack<int>::reverse_iterator  rit = mstack.rbegin();
	std::cout << "First reverse element of the LIFO stack as iterator: " << *rit << std::endl;
	MutantStack<int>::reverse_iterator  rite = mstack.rend();
	rite--;
	std::cout << "Last reverse element of the LIFO stack as iterator: " << *rite << std::endl;
	std::cout << "--- End of MutantStack testing ---" << std::endl;
	std::cout << "--- std::list testing ---" << std::endl;
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << "The top element of the list: " << list.back() << std::endl;
	list.pop_back();
	std::cout << "Size of the list after pop: " << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	std::list<int>::iterator l_it = list.begin();
	std::cout << "First element of the list stack as iterator: " << *l_it << std::endl;
	std::list<int>::iterator l_ite = list.end();
	++l_it;
	--l_it;
	while (l_it != l_ite)
	{
		std::cout << "Content of the list stack node: " << *l_it << std::endl;
		++l_it;
	}
	std::cout << "--- End of std::list testing ---" << std::endl;
	return 0;
}
