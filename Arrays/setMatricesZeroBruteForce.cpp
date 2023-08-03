/*https://leetcode.com/problems/set-matrix-zeroes/*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> matrix;

    // Read the matrix
    for (int i = 0; i < row; i++)
    {
        vector<int> column;
        for (int j = 0; j < col; j++)
        {
            int temp;
            cin >> temp;
            column.emplace_back(temp);
        }
        matrix.emplace_back(column);
    }

    // if any number is zero then replace that col and row with INT16_MAX
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                for (int k = 0; k < row; k++)
                    if (matrix[k][j] != 0)
                        matrix[k][j] = INT16_MAX;
                for (int k = 0; k < col; k++)
                    if (matrix[i][k] != 0)
                        matrix[i][k] = INT16_MAX;
            }
        }
    }

    // Replace INT16_MAX with 0
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == INT16_MAX)
            {
                matrix[i][j] = 0;
            }
        }
    }
}