/*
Problem Explanation:
    Tanya is learning how to decrease a number by one, but she has a specific algorithm she follows:
        - If the last digit of the number is non-zero, she decreases the number by one.
        - If the last digit of the number is zero, she divides the number by 10 (i.e., removes the last digit).
    Given an initial positive integer number n and the number of times k Tanya will subtract one from it, your task is to print the result after all k subtractions.
​
Understanding the Constraints:
    # The initial number n is between 2 and 10^9 inclusive.
    # The number of subtractions k is between 1 and 50 inclusive.
    # The result after all subtractions will be a positive integer.
​
Approach:
    1. Read the initial number n and the number of subtractions k.
    2. For each subtraction, check if the last digit of the number is non-zero. If it is, decrement the number by one. Otherwise, divide the number by 10.
    3. Repeat step 2 for k times.
    4. Output the final result after all subtractions.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Input
    int n, k;
    cin >> n >> k;

    // Perform k iterations of subtracting one from the number n
    for (int i = 0; i < k; i++)
    {
        // Extract the last digit of n
        int lastDigit = n % 10;

        // If the last digit is non-zero, decrement n by one
        if (lastDigit != 0)
        {
            n--;
        }
        // If the last digit is zero, divide n by 10 to remove the last digit
        else
        {
            n /= 10;
        }
    }

    // Output the final value of n after k iterations
    cout << n << endl;
    return 0;
}