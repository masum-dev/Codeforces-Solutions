/*
Problem Explanation:
    You are given a string s. Each character in the string is either 0 or 1. The goal is to make all 1's in the string form a contiguous subsegment. You are allowed to erase some (possibly none) 0's from the string. The task is to determine the minimum number of 0's that need to be erased to achieve this.
​
Understanding the Constraints:
    # The input consists of t test cases, where t is between 1 and 100.
    # Each test case consists of a string s of length |s|, where 1 <= |s| <= 100.
    # Each character in the string s is either '0' or '1'.
​
Approach:
    1. Iterate through the string to find the start and end point of the contiguous subsegment of ones.
    2. If there are no ones in the string, output 0.
    3. Count the number of zeros between the start and end point.
    4. Output the count of zeros as the result for each test case.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // Input
        string number;
        cin >> number;

        int start = -1;
        int end = -1;
        int zeros = 0;

        // Find the start and end point of the contiguous subsegment of ones
        for (int i = 0; i < number.length(); i++)
        {
            if (number[i] == '1')
            {
                if (start == -1)
                    start = i;
                end = i;
            }
        }

        // If there are no ones, output 0
        if (start == -1)
        {
            cout << "0" << endl;
            continue;
        }

        // Count zeros between start and end indices
        for (int i = start; i <= end; i++)
        {
            if (number[i] == '0')
            {
                zeros++;
            }
        }

        // Output
        cout << zeros << endl;
    }

    return 0;
}
