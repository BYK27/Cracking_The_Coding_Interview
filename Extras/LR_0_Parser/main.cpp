#include <iostream>
#include "LR0_Parser.hpp"

int main()
{
    LR0_Parser parser;
    parser.construct_automaton();
    const std::string input = "i";

    if (parser.parse_input(input)) {
        std::cout << "Accepted" << std::endl;
    } else {
        std::cout << "Rejected" << std::endl;
    }
    return 0;
}
