#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    //i.k dollar for the i-th banana
    // n dollar he has
    // w bananas to buy
    int k, n, w;
    cin >> k >> n >> w;
    int cost = 0;
 
 
    for(int i = 1; i <= w; i++) {
        cost = cost + (k * i);
    }
 
    if(cost - n > 0) {
        cout << cost - n << endl;
    }
    else 
        cout << 0 << endl;
 
 
    return 0;
}