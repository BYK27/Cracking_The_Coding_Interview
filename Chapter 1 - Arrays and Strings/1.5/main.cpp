/*One Away: There are three types of edits that can be performed on strings: insert a character,
remove a character, or replace a character. Given two strings, write a function to check if they are
one edit (or zero edits) away. */

#include <cstdio>
#include <string>
#include <unordered_map>
#include <iostream>
#include <cmath>

bool one_away_replacement(const std::string& string_0, const std::string& string_1, size_t size);
bool one_away_edited(const std::string& string_0, const std::string& string_1);

bool one_away(const std::string& string_0, const std::string& string_1)
{

    int size_0 = (int) string_0.size();
    int size_1 = (int) string_1.size();

    if(std::abs(size_0 - size_1) > 1) return false;
    if(size_0 == size_1) return one_away_replacement(string_0, string_1, size_0);
    else return one_away_edited(string_0, string_1);


}

bool one_away_replacement(const std::string& string_0, const std::string& string_1, size_t size)
{
    bool has_one = false;
    for(int i = 0 ; i < size ; ++i)
    {
        if(string_0.at(i) != string_1.at(i))
        {
            if(has_one) return false;
            else has_one = true;
        }
    }

    return true;
}

bool one_away_edited(const std::string& string_0, const std::string& string_1)
{
    std::unordered_map<char, int> hash_map_0;
    std::unordered_map<char, int> hash_map_1;

    for(char c: string_0) { hash_map_0[c]++; hash_map_1[c]--;}
    for(char c: string_1) hash_map_1[c]++;

    bool has_one = false;

    for(auto& it: hash_map_1)
    {
        if(it.second > 1 || it.second < -1) return false;
        if(it.second == 1 || it.second == -1)
        {
            if(has_one) return false;
            else has_one = true;
        }
    }

    return true;
}

int main()
{

    std::string str0 = "pale";
    std::string str1 = "ple";

    if(one_away(str0, str1)) std::cout << "String is one away.\n" << std::endl;
    else std::cout << "String is not one away.\n"  << std::endl;

    str0 = "pales";
    str1 = "pale";

    if(one_away(str0, str1)) std::cout << "String is one away.\n" << std::endl;
    else std::cout << "String is not one away.\n"  << std::endl;


    str0 = "pale";
    str1 = "bale";

    if(one_away(str0, str1)) std::cout << "String is one away.\n" << std::endl;
    else std::cout << "String is not one away.\n"  << std::endl;

    str0 = "pale";
    str1 = "bake";

    if(one_away(str0, str1)) std::cout << "String is one away.\n" << std::endl;
    else std::cout << "String is not one away.\n"  << std::endl;



    return 0;
}