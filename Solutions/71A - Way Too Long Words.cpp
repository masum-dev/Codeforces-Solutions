#include <bits/stdc++.h>

using namespace std;

int main()
{

    int input_size;
    cin >> input_size;

    string word;
    for (int i = 0; i < input_size; i++)
    {
        cin >> word;
        if (word.length() > 10)
        {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }

    return 0;
}