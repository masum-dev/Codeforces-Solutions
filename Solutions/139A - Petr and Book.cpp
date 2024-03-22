/*
Problem Explanation:
    Petr purchases a book with `n` pages and plans to start reading it from Monday. Each day of the week, he has a set number of pages he can read. The task is to determine on which day of the week Petr will finish reading the book.
​
Understanding the Constraints:
    # The number of pages in the book `n` is an integer within the range [1, 1000].
    # Petr's reading capacity for each day of the week is represented by seven non-negative integers, with each       integer not exceeding 1000.
    # At least one of the seven integers representing Petr's reading capacity is greater than zero.
​
Approach:
    1. Read the total number of pages in the book, `n`, and the number of pages Petr can read each day of the week into an array `pagesPerDay`.
    2. Initialize variables `counter` (to track total pages read) and `i` (representing the current day, starting from Monday).
    3. While `counter` is less than `n`, increment `counter` by the pages Petr can read on the current day (`pagesPerDay[i]`).
    4. If `counter` becomes greater than or equal to `n`, exit the loop.
    5. Move to the next day by incrementing `i` and taking the modulo operation with 7 to ensure it remains within the range [0, 6].
    6. Output the value of `i + 1` to represent the day when Petr finishes reading the book.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int pagesPerDay[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> pagesPerDay[i];
    }

    int counter = 0;
    int i = 0;

    while (counter < n)
    {
        counter += pagesPerDay[i];
        if (counter >= n)
        {
            break;
        }
        // Move to the next day
        i = (i + 1) % 7;
    }

    cout << (i + 1) << endl;

    return 0;
}
