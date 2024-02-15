/*
Problem Explanation:
    A soldier wants to buy  w  bananas from a shop. The shop sells each banana at an increasing price: the first banana costs  k  dollars, the second costs  2k  dollars, the third costs  3k  dollars, and so on.
    The soldier initially has  n  dollars. The task is to determine how many dollars the soldier needs to borrow from his friend to buy all  w  bananas.

Understanding the Constraints:
    #  1 <= k, w <= 1000 : The cost of the first banana and the number of bananas the soldier wants are between 1 and 1000, inclusive.
    #  0 <= n <= 10^9 : The initial number of dollars the soldier has can be up to  10^9 .

Approach:
    1. Calculate the total cost of buying  w  bananas using the arithmetic sum formula:  total_cost = k + 2k + 3k + ... + wk .
    2. The total cost can be expressed as  total_cost = k * (1 + 2 + 3 + ... + w) .
    3. Use the arithmetic sum formula  1 + 2 + 3 + ... + w = ((w * (w + 1))/2)  to calculate the sum.
    4. Subtract the soldier's initial money  n  from the total cost to determine the amount he needs to borrow.
    5. Output the amount of money the soldier must borrow.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Input
    // k = 1st Banana Cost, n = His Balance,  w = Number of banana he wants
    int k, n, w;
    cin >> k >> n >> w;

    // Calculating the total cost of the Bananas
    int totalCost = k * ((w * (w + 1)) / 2);

    // Output
    if (n < totalCost)
    {
        cout << totalCost - n << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}