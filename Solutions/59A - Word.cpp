#include <bits/stdc++.h>

using namespace std;

int main()
{

    string input_word;
    cin >> input_word;

    int capital = 0, small = 0;

    for (char c : input_word)
    {
        if (isupper(c))
        {
            capital++;
        }
        else
            small++;
    }

    if (capital == small || capital < small)
    {

        for (char &c : input_word)
        {
            c = tolower(c);
        }
    }

    else
    {
        for (char &c : input_word)
        {
            c = toupper(c);
        }
    }
    cout << input_word << endl;

    return 0;
}