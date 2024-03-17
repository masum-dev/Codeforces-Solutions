/*
Problem Explanation:
    You are given a grid representing a conveyor belt with cells.
    Each cell, except the last one, has a direction assigned to it: Right (R) or Down (D).
    Luggage placed on the conveyor belt should eventually reach the last cell (n,m), where it is picked up.
    However, some cells may be assigned the wrong direction, causing the luggage to be lost.
    Your task is to determine the minimum number of cells you have to change their direction to make the conveyor belt functional.
​
Understanding the Constraints:
    # The grid has dimensions n×m where  1 ≤ n ≤ 100 and 1 ≤ m ≤ 100.
    # Each cell contains either 'R' or 'D', except for the last cell which contains 'C'.
    # The number of test cases is between 1 and 10.
​
Approach:
    1. Read the dimensions of the grid, n rows and m columns.
    2. Read the grid data containing the direction of each cell.
    3. Iterate Over Cells:
       - Iterate over each cell in the grid:
            i) Check if the cell is in the last row and its direction is 'D'. If so, increment the counter for cells that need to be changed.
            ii) Check if the cell is in the last column and its direction is 'R'. If so, increment the counter for cells that need to be changed.
    4. Output the total count of cells that need to be modified.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        // Input
        int row, col;
        cin >> row >> col;

        char grid[row][col];

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> grid[i][j];
            }
        }

        // Counter
        int cellsMove = 0;

        // Counting for 'D' on the last row
        for (int i = 0; i < col - 1; i++)
        {
            //
            if (grid[row - 1][i] != 'R')
            {
                cellsMove++;
            }
        }

        // Counting for 'R' on the last column
        for (int i = 0; i < row - 1; i++)
        {
            //
            if (grid[i][col - 1] != 'D')
            {
                cellsMove++;
            }
        }

        // Output
        cout << cellsMove << endl;
    }

    return 0;
}