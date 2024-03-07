/*
Problem Explanation:
    Gennady enjoys playing a card game called "Mau-Mau" with tourists staying at his hotel. In Mau-Mau, players must match the suit or rank of the card on the table with the cards in their hand to play a card. Gennady wants to assess your skills by checking if you can play at least one card from your hand given the card on the table.
​
Understanding the Constraints:
    # Each card is represented by a two-character string denoting its rank and suit.
    # Ranks: 2, 3, 4, 5, 6, 7, 8, 9, T, J, Q, K, A (T for 10)
    # Suits: D (Diamonds), C (Clubs), S (Spades), H (Hearts)
    # The card on the table and the cards in your hand are distinct.
    # All input strings are valid and contain only characters from the specified sets.
​
Approach:
    1. Read the card on the table and the five cards in your hand.
    2. Check if any card in your hand has the same rank or the same suit as the card on the table.
    3. If at least one card matches, you can play a card, so print "YES".
    4. If no card matches, you cannot play any card, so print "NO".
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input: Card on Table
    string cardOnTable;
    cin >> cardOnTable;

    // Array to store the cards
    string cards[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> cards[i];
    }

    // Flag to check if a card can be played
    bool canPlay = false;

    // Check if any card in the hand matches the card on the table
    for (int i = 0; i < 5; i++)
    {
        // Check if the rank or suit matches
        if (cards[i][0] == cardOnTable[0] || cards[i][1] == cardOnTable[1])
        {
            canPlay = true;
            break;
        }
    }

    // Output
    if (canPlay)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
