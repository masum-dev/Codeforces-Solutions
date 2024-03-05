/*
Problem Explanation:
    Given two integer variables  a  and  b , initialized with positive values, and a target value  n , find the minimum number of operations required to make one of the variables  a  or  b  strictly greater than  n  using only the "+=" operation.
​
Understanding the Constraints:
    # The number of test cases  T  is between  1  and  100.
    # For each test case, the initial values of  a  and  b  are between  1  and  n , and  n  is between  1  and  10^9.
​
Approach:
    # To solve the problem, we need to perform the "+=" operation to increase the value of either  a  or  b  until one of them exceeds n.
    # We can choose the variable with the smaller initial value to increase, as it will take fewer operations to exceed  n.
    # We can calculate the number of operations needed by repeatedly adding the smaller value to the larger one until the larger value becomes greater than  n.
    # After finding the minimum number of operations for each test case, we print the result.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;

        int counter = 0;
        int max_val = max(a, b);
        int min_val = min(a, b);

        // Perform operations until one of the variables exceeds the threshold value n
        while (max_val <= n && min_val <= n)
        {
            // Choose the variable with the smaller value to be added to the other variable
            if (max_val < min_val)
            {
                max_val += min_val;
            }
            else
            {
                min_val += max_val;
            }

            counter++;
        }

        cout << counter << endl;
    }

    return 0;
}