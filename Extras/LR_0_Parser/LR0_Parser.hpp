#ifndef LR_0_PARSER_LR0_PARSER_HPP
#define LR_0_PARSER_LR0_PARSER_HPP

#include "LR0_Item.hpp"
#include <vector>
#include <set>
#include <utility>
#include <map>
#include <stack>

class LR0_Parser
{
private:
    std::vector<std::pair<char, std::string>> production_rules = {
        {'S', "E"},
        {'E', "E+T"},
        {'E', "T"},
        {'T', "T*F"},
        {'T', "F"},
        {'F', "(E)"},
        {'F', "i"}
    };
    std::set<char> non_terminals = {'+', '*', '(', ')', 'i'};
    std::set<char> terminals = {'S', 'E', 'T', 'F'};

    std::vector<std::set<LR0_Item>> states;
    std::map<std::pair<char, int>,std::pair<char, int>> parsing_table;  //key - {production_rule_no, input_symbol} ; value - action, rule_no

public:
    bool parse_input(const std::string& input);
    void construct_automaton();

private:
    static std::set<LR0_Item> go_to(const std::set<LR0_Item>& items, char symbol);
    std::set<LR0_Item> closure(const std::set<LR0_Item>& items);

};

#endif //LR_0_PARSER_LR0_PARSER_HPP
