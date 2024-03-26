/*
Problem Explanation:
    Vasya visits his classmate Petya, who lives in an apartment building. The apartments in the building are distributed in a specific pattern: the first floor has 2 apartments, and each subsequent floor contains x apartments each. Vasya knows Petya's apartment number, and he needs to determine on which floor Petya lives. This problem aims to find the floor number of Petya's apartment based on the total number of apartments in the building and the number of apartments on each floor except the first one.

    The player who can't choose any number satisfying the conditions loses. This problem aims to determine the winner if both players play optimally.​

Understanding the Constraints:
    # The number of test cases t is between 1 and 1000.
    # Each test case consists of two integers n and x, representing the number of Petya's apartment and the number of apartments on each floor except the first one, respectively.
    # The apartment number n is between 1 and 1000.
    # The number of apartments on each floor x is between 1 and 1000.
    # The building is always high enough to fit at least n apartments.
​
Approach:
    1) If n is less than or equal to 2 (meaning Petya lives on the first or second floor), set the floor number to 1.
    2) Otherwise, subtract 2 from n to account for the two apartments on the first floor.
    3) Calculate the floor number using the formula: ((n - 2 + x - 1) / x) + 1.
    4) Output the floor number.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int floor;
        if (n <= 2)
        {
            floor = 1;
        }
        else
        {

            // Subtract 2 for the first floor
            n -= 2;
            floor = ((n + x - 1) / x) + 1;
        }

        cout << floor << endl;
    }
    return 0;
}