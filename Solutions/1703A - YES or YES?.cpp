#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string text;
        cin >> text;
        int sum;

        for (char &c : text) {
            if (islower(c)) {
                c = toupper(c);
            }
        }

        sum = text[0] + text[1] + text[2];

        if(sum == (int)'Y' + (int)'E' + (int)'S' && text[0] == (int)'Y' && text[1] == (int)'E' && text[2] == (int)'S') {

            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }


    return 0;
}