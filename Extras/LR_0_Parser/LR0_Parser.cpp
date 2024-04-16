#include "LR0_Parser.hpp"

#define INITIAL_STACK 0

bool LR0_Parser::parse_input(const std::string &input)
{
    std::stack<int> state_stack;
    state_stack.push(INITIAL_STACK);
    size_t index = 0;
    size_t input_length = input.size();

    while(index < input_length)
    {
        char current_symbol = input[index];
        if(!parsing_table.count({state_stack.top(), current_symbol})) return false;
        auto action = parsing_table[{state_stack.top(), current_symbol}];

        //shift operation
        if(action.first == 'S')
        {
            state_stack.push(action.second);
            ++index;
        }
        //goto operation
        else if(action.first == 'G')
        {
            state_stack.push(action.second);
        }
        else return false;
    }
    return true;
}

void LR0_Parser::construct_automaton()
{
    std::set<LR0_Item> initial_item = {{'S', this->production_rules[0].second, 0}};
    this->states.push_back(closure(initial_item));
    size_t states_size = this->states.size();
    for (size_t i = 0; i < states_size; ++i)
    {
        std::set<LR0_Item> state_current = this->states[i];
        for(char symbol : this->terminals)
        {
            std::set<LR0_Item> state_next = LR0_Parser::go_to(state_current, symbol);
            if(!state_next.empty())
            {
                this->states.push_back(state_next);
                parsing_table[{i, symbol}] = {'S', states_size - 1};
            }
        }
        for(char symbol: this->non_terminals)
        {
            std::set<LR0_Item> state_next = LR0_Parser::go_to(state_current, symbol);
            if(!state_next.empty())
            {
                this->states.push_back({state_next});
                parsing_table[{i, symbol}] = {'G', states_size - 1};
            }
        }
    }
}

std::set<LR0_Item> LR0_Parser::go_to(const std::set<LR0_Item> &items, char symbol)
{
    std::set<LR0_Item> result;
    size_t items_size = items.size();
    for(const LR0_Item& item: items)
    {
        if(item.dot_index < items_size && item.right_hand_side[item.dot_index] == symbol)
        {
            LR0_Item item_new = {item.left_hand_side, item.right_hand_side, item.dot_index + 1};
            result.insert(item_new);
        }
    }
    return result;
}

std::set<LR0_Item> LR0_Parser::closure(const std::set<LR0_Item> &items)
{
    std::set<LR0_Item> closure_set = items;
    bool changed = true;
    while (changed)
    {
        changed = false;
        for(const LR0_Item& item : closure_set)
        {
            if(item.dot_index < item.right_hand_side.size() && this->non_terminals.count(item.right_hand_side[item.dot_index]))
            {
                char symbol_next = item.right_hand_side[item.dot_index];
                for(const std::pair<char, std::string>& production : this->production_rules)
                {
                    if(production.first == symbol_next)
                    {
                        LR0_Item item_new = {symbol_next, production.second, 0};
                        if(!closure_set.count(item_new))
                        {
                            closure_set.insert(item_new);
                            changed = true;
                        }
                    }
                }
            }
        }
    }

    return closure_set;
}
