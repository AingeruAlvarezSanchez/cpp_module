#include "span.hpp"
#include <iostream>

int main()
{
  try
  {
    Span sp = Span(5);
    Span sp2;
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    sp2.generateNewVector(10000);
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

    Span spFailed;
    spFailed.generateNewVector(1);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
}
