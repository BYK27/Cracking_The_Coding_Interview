/*Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and
column are set to 0. */

#include <cstdio>
#include <vector>

bool is_row_zero(const std::vector<std::vector<int>>& matrix, int N)
{
    for(int j = 0 ; j < N ; ++j) if(matrix[0][j] == 0) return true;
    return false;
}

bool is_column_zero(const std::vector<std::vector<int>>& matrix, int M)
{
    for(int i = 0 ; i < M ; ++i) if(matrix[i][0] == 0) return true;
    return false;
}

void set_matrix_zero_indicator(std::vector<std::vector<int>>& matrix, int M, int N)
{
    for(int i = 1 ; i < M ; ++i)
    {
        for(int j = 1 ; j < N ; ++j)
        {
            if(matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
}

void set_matrix_zero(std::vector<std::vector<int>>& matrix, int M, int N)
{
    for(int i = 1 ; i < M ; ++i)
    {
        for(int j = 1 ; j < N ; ++j)
        {
            if(matrix[0][j] == 0 || matrix[i][0] == 0) matrix[i][j] = 0;
        }
    }
}


void set_row_zero(std::vector<std::vector<int>>& matrix, int N)
{
    for(int j = 0 ; j < N ; ++j)
    {
        matrix[0][j];
    }
}

void set_column_zero(std::vector<std::vector<int>>& matrix, int M)
{
    for(int i = 0 ; i < M ; ++i)
    {
        matrix[i][0];
    }
}

void set_zeroes(std::vector<std::vector<int>>& matrix)
{
    const int M = static_cast<int>(matrix.size());
    const int N = static_cast<int>(matrix[0].size());

    bool first_row_zero = is_row_zero(matrix, N);
    bool first_column_zero = is_column_zero(matrix, M);
    set_matrix_zero_indicator(matrix, M, N);
    set_matrix_zero(matrix, M, N);

    if(first_row_zero) set_row_zero(matrix, N);
    if(first_column_zero) set_column_zero(matrix, M);

}


int main()
{
    // Example usage
    std::vector<std::vector<int>> matrix = {
            {1, 2, 3},
            {4, 0, 6},
            {7, 8, 9}
    };

    set_zeroes(matrix);

    // Output the modified matrix
    for (const auto& row : matrix) {
        for (int element : row) {
            printf("%d ", element);
        }
        printf("\n");
    }
    return 0;
}