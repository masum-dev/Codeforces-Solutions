/*
Problem Explanation:
    Polycarp loves ciphers and has invented his own called the "repeating cipher." In this cipher, a string s is encrypted by repeating each character a certain number of times based on its position in the string. For example, the first character is repeated once, the second character is repeated twice, and so on. Given the encrypted string t, the task is to decrypt it and find the original string s.
​
Understanding the Constraints:
    # The length of the encrypted string t ranges from 1 to 55.
    # The encrypted string contains only lowercase Latin letters.
    # There is always a valid decryption for each test case.
​
Approach:
    1. Read the length of the encrypted string, `n`, from the input.
    2. Read the encrypted string, `t`, from the input.
    3. Initialize an empty string, `decryptedString`, to store the decrypted string.
    4. Initialize a variable `a` to keep track of the position in the encrypted string.
    5. Iterate from 1 to `n`, representing the index of characters in the decrypted string.
    6. At each iteration, append the character at position `a - 1` in the encrypted string to the `decryptedString`.
    7. Update the value of `a` by adding the current iteration index.
    8. If `a` exceeds the length of the encrypted string, break out of the loop.
    9. Output the `decryptedString`.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input: Length of the encrypted string
    int lengthOfString;
    cin >> lengthOfString;

    // Input: Encrypted string
    string encryptedString;
    cin >> encryptedString;

    // Initialize an empty string to store the decrypted string
    string decryptedString = "";

    // Initialize a variable to keep track of the position in the encrypted string
    int a = 1;

    // Iterate through each character position in the decrypted string
    for (int i = 1; i <= lengthOfString; i++)
    {
        // Append the character at position a - 1 in the encrypted string to the decrypted string
        decryptedString.push_back(encryptedString[a - 1]);

        // Update the value of a by adding the current iteration index
        a += i;

        // If a exceeds the length of the encrypted string, exit the loop
        if (a > lengthOfString)
        {
            break;
        }
    }

    // Output: Decrypted string
    cout << decryptedString << endl;

    return 0;
}
