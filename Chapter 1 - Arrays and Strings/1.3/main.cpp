/*URLify: Write a method to replace all spaces in a string with '%20'. You may assume that the string
has sufficient space at the end to hold the additional characters, and that you are given the "true"
length of the string.
*/

#include <cstdio>
#include <string>
#include <iostream>


void URLify(std::string& input_string, int length)
{
    int number_of_white_spaces = 0;

    for(int i = 0 ; i < length ; ++i)
    {
        if(input_string[i] == ' ') ++number_of_white_spaces;
    }

    int true_length =  length + number_of_white_spaces * 2;


    for(int i = length - 1; i >= 0 ; --i)
    {
        if(input_string[i] == ' ')
        {
            input_string[true_length - 1] = '0';
            input_string[true_length - 2] = '2';
            input_string[true_length - 3] = '%';
            true_length -= 3;
        }
        else
        {
            input_string[true_length - 1] = input_string[i];
            true_length -= 1;
        }
    }
}


int main()
{
    std::string str = "Mr John Smith    ";
    int trueLength = 13;

    std::cout << "Original string: " << str << std::endl;

    URLify(str, trueLength);

    std::cout << "Modified string: " << str << std::endl;
    return 0;
}