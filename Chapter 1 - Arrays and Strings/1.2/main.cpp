/*Check Permutation: Given two strings, write a method to decide if one is a permutation of the other.
*/

#include <cstdio>
#include <string>
#include <unordered_map>

bool check_permutation(const std::string& input_string_0, const std::string& input_string_1)
{
    std::unordered_map<char, int> hash_map_0; //character is key, counter is value
    std::unordered_map<char, int> hash_map_1; //character is key, counter is value
    auto size_string_0 = input_string_0.size();
    auto size_string_1 = input_string_1.size();

    if(size_string_0 != size_string_1) return false;

    for(int i = 0 ; i < size_string_0 ; ++i)
    {
        hash_map_0[input_string_0[i]]++;
        hash_map_1[input_string_1[i]]++;
    }

    for(int i  = 0 ; i < hash_map_0.size(); ++i) if(hash_map_0[i] != hash_map_1[i]) return false;

    return true;
}


int main()
{
    if(check_permutation("hello", "lloeh")) printf("The strings are permutations");
    else printf("Strings are not permutations");

    return 0;
}