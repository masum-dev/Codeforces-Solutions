/*
Problem Explanation:
    You're given a 5x5 matrix containing 24 zeroes and a single number one. The objective is to make the matrix beautiful by placing the number one at the center of the matrix. You can achieve this by swapping neighboring rows or columns of the matrix.

Understanding the Constraints:
    # The matrix is fixed at 5x5 size.
    # It contains 24 zeroes and one number one.
    # The number one needs to be at the center of the matrix.

Approach:
    1. Iterate through the matrix to find the position of the number one.
    2. Calculate the number of moves needed to bring the number one to the center.
    3. Determine the minimum number of moves required by considering both row and column swaps.
    4. Output the minimum number of moves required to make the matrix beautiful.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Input the elements of the matrix
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Capture the row and column number where 1 is found
    int row;
    int col;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                row = i + 1;
                col = j + 1;
            }
        }
    }

    // Subtract the row and column number (x, y) from (3, 3) and if result is negetive make it positive
    int rowMove = ((3 - row) < 0) ? ((3 - row) * -1) : (3 - row);
    int colMove = ((3 - col) < 0) ? ((3 - col) * -1) : (3 - col);

    // Output
    cout << rowMove + colMove << endl;

    return 0;
}