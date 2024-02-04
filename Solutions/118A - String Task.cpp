/* 
Problem Explanation:
    Petya has to write a program that modifies a given string according to the following rules:
    1. Delete all vowels (A, O, Y, E, U, I).
    2. Insert a character "." before each consonant.
    3. Replace all uppercase consonants with corresponding lowercase ones.

Understanding the Constraints:
    # The input string consists of uppercase and lowercase Latin letters.
    # The length of the string is between 1 and 100, inclusive.
    # The output string is guaranteed to be non-empty.

Approach:
    For each character:
    1. If it is a vowel (A, O, Y, E, U, I, both uppercase and lowercase), skip it.
    2. If it is a consonant (not a vowel), insert a "." before it and replace uppercase consonants with lowercase ones.
*/


#include <bits/stdc++.h>
 
using namespace std;


int main() {
    
    // Taking input
    string inputText;
    cin >> inputText;

    // Empty string
    string outputText = "";

    // Coverting the string into lowercase
    transform(inputText.begin(), inputText.end(), inputText.begin(), ::tolower);

    //Build 'outputText' string: Comparing if any char of 'inputText' string is vowel(skip it) and put '.' before consonants.
    for(int i = 0; i < inputText.size(); i++) {
        
        if(inputText[i] == 'a' || inputText[i] == 'o' || inputText[i] == 'y' || inputText[i] == 'e' || inputText[i] == 'u' || inputText[i] == 'i') {
            continue;
        }

        // Building the new 'outputText' string 
        outputText += ".";
        outputText += inputText[i];
    }

    cout << outputText << endl;
    

    return 0;
}