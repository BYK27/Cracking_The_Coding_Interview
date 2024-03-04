/*Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palin
drome. A palindrome is a word or phrase that is the same forwards and backwards. A permutation
is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.*/


#include <cstdio>
#include <string>
#include <unordered_map>
#include <iostream>

bool palindrome_permutation(const std::string& input_string)
{
    std::unordered_map<char, int> hash_map; //char is key, count is value
    auto size = input_string.size();
    bool has_one = false;

    for(int i = 0 ; i < size ; ++i)
    {
        if(input_string.at(i) != ' ')hash_map[input_string.at(i)]++;
    }

    for(auto & it : hash_map)
    {
        if(it.second > 2) return false;
        if(it.second == 1)
        {
            if(has_one) return false;
            else has_one = true;
        }
    }

    return  true;
}

int main()
{
    std::string str = "taco cat";


    if(palindrome_permutation(str)) std::cout << "String is a palindrome permutation.\n" << std::endl;
    else std::cout << "String is not a palindrome permutation.\n"  << std::endl;

    return 0;
}