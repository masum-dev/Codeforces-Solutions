/* 
Problem Explanation:
    You are given a word that might have been typed with the Caps Lock key accidentally switched on. You need to determine if the word fits the criteria for having the Caps Lock accidentally on and correct it if necessary.

    A word is considered to have Caps Lock accidentally on if either:
    1. It only contains uppercase letters.
    2. All letters except for the first one are uppercase.

Understanding the Constraints:
    # The word can contain both uppercase and lowercase Latin letters.
    # The length of the word is between 1 and 100, inclusive.

Approach:
    1. Check if the word satisfies either of the conditions mentioned above.
    2. If it does, change the case of all letters in the word.
    3. If it doesn't, leave the word unchanged.
*/



#include <bits/stdc++.h>

using namespace std;


int main() {
    
    // Input
    string word;
    cin >> word;

    bool allUpperExceptFirst = true;
    bool allUpper = true;

    // Check if all letters except the first one are uppercase
    for(int i = 1; i < word.size(); i++) {
        if(islower(word[i])) {
            allUpperExceptFirst = false;
            break;
        }
    }


    // Check if all letters are uppercase
    for(int i = 0; i < word.size(); i++) {
        if(islower(word[i])) {
            allUpper = false;
            break;
        }
    }

    // If all the letters are uppercase make them all lowecase and terminate the programme
    if(allUpper) {

        for(int i = 0; i < word.size(); i++) {
            word[i] = tolower(word[i]);
        }
        // Output
        cout << word << endl;
        return 0;
    }


    // If all the letters are uppercase except the 1st one, make the 1st letter uppercase and rest lowercase  
    if(allUpperExceptFirst) {

        for(int i = 1; i < word.size(); i++) {
            word[i] = tolower(word[i]);
        }
        // Make the 1st letter uppercase
        if(islower(word[0])) {
            word[0] = toupper(word[0]);
        }

    }

    // Output
    cout << word << endl;

    return 0;

}