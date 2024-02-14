/*
Problem Explanation:
    Petya defines lucky numbers as positive integers containing only the digits 4 and 7. However, he's also interested in numbers that are "nearly lucky." A number is nearly lucky if the count of lucky digits in it is itself a lucky number.
    For example, consider the number 474747. It contains six lucky digits, which is not a lucky number itself. Therefore, it's not a nearly lucky number. On the other hand, the number 474 contains only one lucky digit, which is a lucky number itself. Thus, it's considered a nearly lucky number.

Understanding the Constraints:
    # The input number n is between 1 and 10^18, inclusive.

Approach:
    1. Read the input number n.
    2. Count the number of lucky digits in n.
    3. Check if the count of lucky digits is a lucky number itself.
    4. If the count is a lucky number, output "YES"; otherwise, output "NO".
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Input the number
    long long n;
    cin >> n;

    // Counting the number of lucky digits (4, 7)
    int counter = 0;

    while (n != 0)
    {
        int lastDigit = n % 10;
        if (lastDigit == 4 || lastDigit == 7)
        {
            counter++;
        }
        n /= 10;
    }

    // Output
    if (counter == 4 || counter == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}