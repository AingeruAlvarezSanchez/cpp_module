#include <iostream>
#include "RPN.hpp"

int main(int argc, char **argv) {
    if (argc == 2) {
        try {
            RPN rpnCalculator;
            std::cout << rpnCalculator.performRpnOperation(argv[1]) << "\n";
        }
        catch (const std::exception& e) {
            std::cout << "Error\n";
            errno = 1;
            return 1;
        }
    } else {
        std::cout << "Error\n";
        errno = 1;
        return  1;
    }
    return  0;
}
