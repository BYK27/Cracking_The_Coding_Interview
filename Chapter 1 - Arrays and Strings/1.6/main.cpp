/*tring Compression: Implement a method to perform basic string compression using the counts
of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the
"compressed" string would not become smaller than the original string, your method should return
the original string. You can assume the string has only uppercase and lowercase letters (a - z). */


#include <cstdio>
#include <string>
#include <unordered_map>
#include <iostream>

std::string compress(const std::string& input_string)
{

    if(input_string.empty()) return input_string;

    std::string ret;
    int left = 0;
    int right = 1;
    size_t size = input_string.size();
    int counter = 1;
    int ret_size = 1;

    while(right < size)
    {
        if(input_string[left] == input_string[right])
        {
            ++counter;
        }
        else
        {
            ret += input_string[left];
            ret += std::to_string(counter);
            ret_size += counter;
            counter = 1;
            left = right;
        }
        ++right;
    }

    ret += input_string[left];
    ret += std::to_string(counter);

    return ret_size < size ? ret : input_string;
}

int main()
{
    std::cout << compress("aabcccccaaa") << "\n";
    std::cout << compress("asdfgh") << "\n";
    return 0;
}