#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n, arr[100];
    float total_volume = 0;
    cin >> n;
 
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        total_volume += arr[i];
    }
    float fraction_volume = total_volume / n;
 
 
    cout << fraction_volume << endl;
    
    return 0;
}