#include "span.hpp"
#include <iostream>     // std::cout
#include <algorithm>    // std::generate
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

int randomNumberGenerator(void) {
  return (std::rand()%100);
}

/*int main()
{
  try
  {
    Span sp2;
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
}*/

int main () {
  try {
    std::vector<int>  myVector(10000);
    std::generate (myVector.begin(), myVector.end(), randomNumberGenerator);

    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it=myVector.begin(); it!=myVector.end(); ++it)
      std::cout << ' ' << *it;
    std::cout << '\n';
  }
  catch(const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
  return (0);
}