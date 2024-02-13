/*
Problem Explanation:
    You are given the responses of n people regarding whether they find a problem easy or hard. If at least one person says the problem is hard, the coordinator decides to change the problem.

Understanding the Constraints:
    # There are n people, where 1 <= n <= 100.
    # Each person's response is represented by either 0 or 1, where 0 means the problem is easy and 1 means the problem is hard.

Approach:
    1. Iterate through all the responses.
    2. If you encounter a response of 1 (indicating the problem is hard) from any person, output "HARD" and stop. Otherwise, if all responses are 0 (indicating the problem is easy for everyone), output "EASY".
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Input the number of people who were asked
    int n;
    cin >> n;

    // Vector to store opinions
    vector<int> opinions(n);
    for (int i = 0; i < n; i++)
    {
        cin >> opinions[i];
    }

    // To save result
    string result;

    // Iterate through all the responses
    for (int i = 0; i < n; i++)
    {
        if (opinions[i] == 1)
        {
            result = "HARD";
            break;
        }
        else
        {
            result = "EASY";
        }
    }

    // Output
    cout << result << endl;

    return 0;
}