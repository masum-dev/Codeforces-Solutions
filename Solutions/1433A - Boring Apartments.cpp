/*
Problem Explanation:
    There is a building with apartments numbered from 1 to 10,000. An apartment is considered boring if its number consists of the same digit. For example, 11, 2, 777, 9999 are boring apartments.

    A character wants to know how many digits he pressed in total while calling the intercoms of all boring apartments until someone answers the call. The character calls the apartments in a specific order: first, he calls all apartments consisting of the digit 1 in increasing order, then all apartments consisting of the digit 2, and so on.

    The resident of the boring apartment x answers the call, and the character stops calling anyone further.
​
Understanding the Constraints:
    # The input consists of t independent test cases.
    # Each test case contains an integer x (1 ≤ x ≤ 9999), representing the apartment number of the resident who answered the call.
    # It is guaranteed that x consists of the same digit.
​
Approach:
    1. Read the number of test cases.
    2. Iterate through each test case:
        a. Input the apartment number.
        b. Extract the last digit of the apartment number.
        c. Calculate the total number of keypresses needed for digits. This is done by subtracting 1 from the last digit and multiplying the result by 10.
        d. Count the number of digits in the apartment number.
        e. Calculate the total number of keypresses needed for all digits. This is done using the formula for the sum of the first n natural numbers: n * (n + 1) / 2, where n is the number of digits.
        f. Output the total number of keypresses needed.
    3. Repeat steps 2 for each test case.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input the number of test cases
    int t;
    cin >> t;

    // Iterate through each test case
    while (t--)
    {
        // Input the apartment number
        int n;
        cin >> n;

        // Extract the last digit of the apartment number
        int lastDigit = n % 10;

        // Calculate the total number of keypresses for digits
        int totalKeyPress = ((lastDigit - 1) * 10);

        // Count the number of digits in the apartment number
        int digitCounter = 0;
        while (n > 0)
        {
            n /= 10;
            digitCounter++;
        }

        // Calculate the total number of keypresses for all digits
        totalKeyPress += (digitCounter * (digitCounter + 1)) / 2;

        // Output
        cout << totalKeyPress << endl;
    }

    return 0;
}
