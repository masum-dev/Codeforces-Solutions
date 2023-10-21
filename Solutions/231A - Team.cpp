#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    int counter = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        if (petya + vasya + tonya >= 2)
        {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}