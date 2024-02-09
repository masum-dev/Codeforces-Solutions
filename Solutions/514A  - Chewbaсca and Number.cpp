/*
Problem Explanation:
    Chewbacca is given an integer number x.
    Chewbacca loves to invert digits in numbers. Inverting digit t means replacing it with digit 9 - t.
    Chewbacca needs to transform the initial number x to the minimum possible positive number by inverting some digits.

Understanding the Constraints:
    # The integer x given to Chewbacca is between 1 and 10^18.
    # Chewbacca needs to transform the number such that it remains positive and does not have leading zeroes.

Approach:
    1. Iterate through each digit of the given number.
    2. For each digit, if it's greater than 4, invert it to get the minimum possible positive number.
    3. Make sure to handle the case where the first digit of the transformed number is not 0, as leading zeroes are not allowed.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Input
    long long n;
    cin >> n;

    long long minimumNumber = 0;
    long long power = 1;

    // Iterate through each digit of the given number
    while (n != 0)
    {
        int lastDigit = n % 10;
        n /= 10;

        // Invert digit if greater than 4, but handle the first digit differently
        if (n == 0 && lastDigit == 9)
        {
            // If the first digit is 9 and it's the only digit, keep it as it is
            minimumNumber = 9 * power + minimumNumber;
        }
        else
        {
            // Otherwise, replace digits greater than 4 with 9 - digit
            int invertedDigit = (lastDigit > 4) ? 9 - lastDigit : lastDigit;
            minimumNumber += invertedDigit * power;
        }

        // Update power of 10
        power *= 10;
    }

    // Output
    cout << minimumNumber << endl;

    return 0;
}