/*
Problem Explanation:
    You are given a positive integer n. A positive integer is called round if it is of the form d00...0, where d is a non-zero digit. In other words, a positive integer is round if all its digits except the leftmost (most significant) are equal to zero. For example, numbers like 1, 9, 4000, 90 are round, while numbers like 110, 707, 222 are not round. Your task is to represent the given number n as a sum of round numbers using the minimum number of terms.

Understanding the Constraints:
    # t (number of test cases): 1 <= t <= 10^4
    # n (given positive integer): 1 <= n <= 10^4

Approach:
1. Read the number of test cases t.
2. For each test case:
   1. Read the integer n.
   2. Initialize an empty array or vector to store the round numbers that form n.
   3. Iterate through the digits of n from right to left:
        i) For each non-zero digit at position i, add the round number d * 10^i to the array, where d is the digit at position i.
   4. Output the size of the array followed by the round numbers in the array.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Number of test cases
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> roundNumbers;
        int counter = 0;
        int powerOf10 = 1;
        while (n > 0)
        {
            int lastDigit = n % 10;
            if (lastDigit != 0)
            {
                // Calculate the round number by multiplying the last digit by the appropriate power of 10 and add it to the vector
                roundNumbers.push_back(lastDigit * powerOf10);
            }
            n /= 10;
            counter++;
            powerOf10 *= 10;
        }
        // Print the number of round numbers
        cout << roundNumbers.size() << endl;

        // Print each round number in the vector
        for (int i = 0; i < roundNumbers.size(); i++)
        {
            cout << roundNumbers[i] << " ";
        }
        cout << endl;
    }
    return 0;
}