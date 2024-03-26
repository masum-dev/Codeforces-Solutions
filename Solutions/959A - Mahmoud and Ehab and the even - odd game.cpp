/*
Problem Explanation:
    Mahmoud and Ehab play a game called the even-odd game. In this game, they start with an integer  n . Each player takes turns, starting from Mahmoud. During each turn, the player must choose an integer  a  to subtract from  n  according to the following rules:

    -  1 <= a <= n
    - If it's Mahmoud's turn,  a  must be even.
    - If it's Ehab's turn,  a  must be odd.

    The player who can't choose any number satisfying the conditions loses. This problem aims to determine the winner if both players play optimally.​

Understanding the Constraints:
    #  1 <= n <= 10^9 : The initial number at the beginning of the game.
    # The input size is small enough to allow for an efficient solution.
​
Approach:
    1. If  n  is even, Mahmoud will win.
    2. If  n  is odd, Ehab will win.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Check if n is ever or odd
    if (n % 2 == 0)
    {
        cout << "Mahmoud" << endl;
    }
    else
    {
        cout << "Ehab" << endl;
    }

    return 0;
}