#ifndef LR_0_PARSER_LR0_ITEM_HPP
#define LR_0_PARSER_LR0_ITEM_HPP

#include <string>
#include <utility>

class LR0_Item
{
public:
    char left_hand_side;
    std::string right_hand_side;
    int dot_index;
    //LR0_Item(char l, std::string r, int d):left_hand_side(l), right_hand_side(std::move(r)), dot_index(d){}
    bool operator<(const LR0_Item& other) const
    {
        if(left_hand_side != other.left_hand_side) return left_hand_side < other.left_hand_side;
        if(right_hand_side == other.right_hand_side) return right_hand_side < other.right_hand_side;
        return dot_index < other.dot_index;
    }
};


#endif //LR_0_PARSER_LR0_ITEM_HPP
