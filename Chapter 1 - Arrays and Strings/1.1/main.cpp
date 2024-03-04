/*Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
        cannot use additional data structures?
*/

#include <cstdio>
#include <string>
#include <unordered_map>

bool is_unique_checker(const std::string& input_string)
{
    int checker = 0;
    for(char character: input_string)
    {
        int character_value = character - 'a';
        if((checker & (1 << character)) > 0) return false;
        checker |= (1<<character);
    }
    return true;
}

bool is_unique_hash_map(const std::string& input_string)
{
    std::unordered_map<char, int> hash_map;
    for(char character: input_string)
    {
        if(hash_map[character]++ > 0) return false;
    }
    return true;
}

int main()
{
    if(is_unique_hash_map("putstringhere")) printf("The string is unique.\n");
    else printf("The string is not unique\n");
    return 0;
}