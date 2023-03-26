//
// Created by Aingeru Alvarez sanchez on 3/21/23.
//

#ifndef RPN_HPP
#define RPN_HPP
#include <stack>

class RPN {
public:
    //Constructors
    RPN();
    RPN(const RPN& cpy);

    //Content Parsing
    bool    parseInput(const std::string& input);

    //Operations
    int    performRpnOperation(const std::string& input);

    //Manipulators
    std::string createTokens(const std::string& input);

    //operator= overload
    RPN&    operator=(const RPN& cpy);

    //Destructor
    ~RPN();
private:
    std::stack<int> _operationStack;
};


#endif //RPN_HPP
