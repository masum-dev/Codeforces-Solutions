/*
Problem Explanation:
    Little Petya hosts a New Year party and invites n friends. Each friend brings a gift and receives one in return. Petya remembers the friend who gave each gift but wants to know who received gifts from whom.

Understanding the Constraints:
    - The number of friends invited to the party (n) ranges from 1 to 100.
    - Each friend received exactly one gift.
    - Each gift was given by one of the invited friends.

Approach:
    1. Read the number of friends invited (n) and their gift assignments (p_i).
    2. Iterate through each friend i and output the friend number who gave the gift to friend i, where p_i represents the gift-giver for friend i.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Input the number of friends
    int n;
    cin >> n;

    // Vector to store the gift-giver for each friend
    vector<int> gifts(n);
    for (int i = 0; i < n; i++)
    {
        cin >> gifts[i];
    }

    // Output the friend who gave a gift to each friend
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (gifts[j] == i)
            {
                cout << j + 1 << " ";
                break;
            }
        }
    }

    return 0;
}
