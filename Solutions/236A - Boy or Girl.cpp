/*
Problem Explanation:
    A person's gender is determined based on the number of distinct characters in their username. If the number of distinct characters is odd, the person is considered male; otherwise, they are considered female.

Understanding the Constraints:
    # The username consists of lowercase English letters.
    # The username has at most 100 characters.
    # The number of distinct characters is used to determine gender.

Approach:
    1. Read the input string representing the username.
    2. Count the number of distinct characters in the username.
    3. If the count of distinct characters is odd, print "CHAT WITH HER!" indicating a female user; otherwise, print "IGNORE HIM!" indicating a male user.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input
    string username;
    cin >> username;

    // Use a set to store unique characters
    set<char> uniqueCharacters;

    // Insert distinct characters
    for (char ch : username)
    {
        uniqueCharacters.insert(ch);
    }

    // Determine the result based on the number of unique characters
    string result = (uniqueCharacters.size() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!";

    // Output
    cout << result << endl;

    return 0;
}
