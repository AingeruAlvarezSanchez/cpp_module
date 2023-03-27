#include <stdexcept>
#include <iostream>
#include <sys/time.h>
#include <iomanip>
#include "PmergeMe.hpp"

//Error handling
#define EBADINPUT 1

int main(int argc, char **argv) {
    if (argc > 2) {
        try {
            PmergeMe    sorter;
            sorter.parseInput(++argv, argc - 1);

            std::cout << "Before: ";
            for (std::vector<int>::iterator it = sorter.getVector().begin(); it != sorter.getVector().end(); it++) {
                std::cout << *it << " ";
            }
            std::cout << "\n";

            struct timeval begin, end;
            double time;

            gettimeofday(&begin, NULL);
            sorter.mergeInsertSort(sorter.getVector(), sorter.getVector().begin(), (--sorter.getVector().end()));
            gettimeofday(&end, NULL);
            time = (end.tv_sec - begin.tv_sec) + (end.tv_usec - begin.tv_usec) / 1000000.0;

            std::cout << "After:  ";
            for (std::vector<int>::iterator it = sorter.getVector().begin(); it != sorter.getVector().end(); it++) {
                std::cout << *it << " ";
            }
            std::cout << "\n";
            std::cout << std::fixed << std::setprecision(6) << "Time to process a range of " << argc - 1 << " elements with std::vector : " << time << " us\n";

            gettimeofday(&begin, NULL);
            sorter.mergeInsertSort(sorter.getDeque(), sorter.getDeque().begin(), (--sorter.getDeque().end()));
            gettimeofday(&end, NULL);
            time = (end.tv_sec - begin.tv_sec) + (end.tv_usec - begin.tv_usec) / 1000000.0;

            std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque  : " << time << " us\n";

        }
        catch (const std::exception& e) {
            std::cout << "Error: " << e.what() << "\n";
            errno = EBADINPUT;
            return  1;
        }
    } else {
        std::cout << "Error: Invalid number of arguments\n";
        return  1;
    }
    return  0;
}
