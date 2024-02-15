#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Input
    string word;
    cin >> word;

    if (word[0] >= 'a' && word[0] <= 'z')
    {
        word[0] = toupper(word[0]);
    }
    // Output
    cout << word << endl;

    return 0;
}