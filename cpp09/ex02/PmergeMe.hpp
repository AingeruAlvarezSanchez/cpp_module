#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <vector>
#include <deque>

#include <iostream>
class PmergeMe {
private:
    std::deque<int>     _deque;
    std::vector<int>    _vector;
public:
    //Constructors
    PmergeMe();
    PmergeMe(const PmergeMe& cpy);

    //Parser
    bool    parseInput(char **args, int argc);

    //operator= overload
    PmergeMe& operator=(const PmergeMe& cpy);

    //Getters
    std::vector<int>&    getVector();
    std::deque<int>&     getDeque();

    //sorter
    template<class Container, class Iterator>
    void    mergeInsertSort(Container& nbArray, Iterator first, Iterator last) {
        if (last - first <= 1) {
            if (*first > *last) {
                std::iter_swap(first, last);
            }
        } else {
            Iterator    middle = first + ((last - first) / 2);
            mergeInsertSort(nbArray, middle + 1, last);
            mergeInsertSort(nbArray, first, middle);
            std::inplace_merge(first, middle + 1, last + 1);
        }
    }

    //Destructor
    ~PmergeMe();
};

#endif //PMERGEME_HPP
