/*
Problem Explanation:
    This problem requires you to draw a snake pattern on an n by m grid. The snake starts at the top left corner and moves horizontally to the right until it reaches the end of the row. Then it moves down two rows and repeats the process, but this time moving to the left. It continues this zigzag pattern until it fills the entire grid.

Understanding the Constraints:
    # The grid dimensions are given by n and m.
    # n is always odd, ensuring that the snake pattern starts and ends at the same side.

Approach:
    1. Iterate through each row of the grid.
    2. For each row, if it's an odd row, fill the entire row with '#' characters.
    3. If it's an even row:
        - If the row number is divisible by 4, fill the first cell with '#' and the rest with '.' characters.
        - If the row number is not divisible by 4, fill the last cell with '#' and the rest with '.' characters.
    4. Output the grid row by row.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            if (i % 2 != 0)
            {
                // If odd row fill the it with "#"
                cout << "#";
            }
            else
            {
                if (i % 4 == 0)
                {
                    // If row number is divisible by 4, 1st cell will be "#"
                    if (j == 1)
                    {

                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                else
                {
                    // If row number is not divisible by 4, last cell will be "#"
                    if (j == m)
                    {

                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}