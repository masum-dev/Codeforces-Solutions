/*
Problem Explanation:
    Xenia, a beginner mathematician, is learning addition with the numbers 1, 2, and 3. However, she can only compute sums if the summands are in non-decreasing order. This means the numbers in the sum must be arranged in increasing order from left to right. For example, she can calculate sums like 1+1+2 or 3+3, but not sums like 1+3+2+1.

    Your task is to take a sum written on the board, represented as a string, and rearrange the summands in non-decreasing order so that Xenia can compute the sum.
​
Understanding the Constraints:
    # The input consists of a single non-empty string representing the sum.
    # The string contains only digits 1, 2, and 3, along with the character '+' to separate the summands.
    # The length of the string does not exceed 100 characters.
    # The sum is valid, meaning it contains no other characters or invalid characters.
​
Approach:
    1. Read the input string containing the sum that Xenia needs to count.
    2. Extract the digits from the input string and store them in a vector.
    3. Sort the vector containing the digits in non-decreasing order.
    4. Reconstruct the sum string with the sorted summands, separating them with '+' signs.
    5. Output the new sum string.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Input
    string text;
    cin >> text;

    // Vector to store the digits
    vector<int> digits;

    // Extract the digits
    for (char c : text)
    {
        if (isdigit(c))
        {
            digits.push_back(c - '0'); // Convert char to int
        }
    }

    // Sort the vector containing the digits in non-decreasing order.
    sort(digits.begin(), digits.end());

    // Reconstruct the string
    for (int i = 0; i < digits.size(); i++)
    {
        cout << digits[i];
        // Print '+' sign if the current digit is not the last one
        if (i != (digits.size() - 1))
        {
            cout << "+";
        }
    }

    return 0;
}