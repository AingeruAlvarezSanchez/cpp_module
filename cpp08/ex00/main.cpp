#include "easyfind.hpp"
#include <iostream>
#include <vector>

void	printValue(int value){
	std::cout << value << std::endl;
}

int main(){
	std::vector<int> lst;

	srand(time(NULL));
	int i = rand() % 100;
	while (i-- > 0){
		lst.push_back(rand() % 100);
	}
	try {
		std::vector<int>::iterator iterator = easyfind(lst, 52);
		std::cout << "The number found is -> " << *iterator << std::endl;
	}
	catch(std::exception &_exception) {
		std::cout << _exception.what() << std::endl;
	}
	return 0;
}