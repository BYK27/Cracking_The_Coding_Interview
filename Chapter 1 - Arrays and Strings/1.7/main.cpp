/*Rotate Matrix: Given an image represented by an NxN matrix, where each pixel in the image is 4
bytes, write a method to rotate the image by 90 degrees. */


#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>

void transpose_matrix(std::vector<std::vector<int>>& input_matrix, int size);
void swap_columns(std::vector<std::vector<int>>& input_matrix, int size);
void display_matrix(const std::vector<std::vector<int>>& input_matrix);

void display_matrix(const std::vector<std::vector<int>>& input_matrix)
{
    int size = static_cast<int>(input_matrix.size());

    for(int row = 0 ; row < size ; ++row)
    {
        for(int column = 0 ; column < size ; ++column)
        {
            std::cout << std::to_string(input_matrix.at(row).at(column)) << " ";
        }
        std::cout << "\n";
    }
}

void rotate_matrix(std::vector<std::vector<int>>& input_matrix)
{
    int size = static_cast<int>(input_matrix.size());
    transpose_matrix(input_matrix, size);
    swap_columns(input_matrix, size);
}

void transpose_matrix(std::vector<std::vector<int>>& input_matrix, int size)
{
    for(int row = 0 ; row < size ; ++row)
    {
        for(int column = 0 ; column <= row ; ++column) std::swap(input_matrix[row][column], input_matrix[column][row]);
    }
}

void swap_columns(std::vector<std::vector<int>>& input_matrix, int size)
{
    for(int row = 0 ; row < size ; ++row) std::reverse(input_matrix.at(row).begin(), input_matrix.at(row).end());
}

int main()
{
    std::vector<std::vector<int>> matrix = {
            {5, 1, 9, 11},
            {2, 4, 8, 10},
            {13, 3, 6, 7},
            {15, 14, 12, 16}
    };

    std::cout << "Original Matrix:" << std::endl;
    display_matrix(matrix);

    // Rotate the matrix
    rotate_matrix(matrix);

    std::cout << "Rotated Matrix:" << std::endl;
    display_matrix(matrix);

    return 0;
}