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
    template<class Iterator>
    void    insertSort(Iterator first, Iterator last) {
        for (Iterator i = first + 1; i != last; i++) {
            Iterator j = i;
            while (j != first && *j < *(j - 1)) {
                std::iter_swap(j, j - 1);
                --j;
            }
        }
    }

    template<class Container, class Iterator>
    void    mergeInsertSort(Container& nbArray, Iterator first, Iterator last) {
        if (last - first <= 1) {
            if (*first > *last) {
                std::iter_swap(first, last);
            }
        } else if (last - first <= 4) {
            insertSort(first, last + 1);
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
