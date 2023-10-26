#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m, year = 0; // n = Limak's weight, m = Bob's weight
    cin >> n >> m;

    while (n <= m)
    {
        n *= 3;
        m *= 2;
        year++;
    }
    cout << year << endl;

    return 0;
}