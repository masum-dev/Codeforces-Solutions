/* 
Problem Explanation:
    You are given an array 'a' consisting of 'n' integer numbers. The instability of the array is defined as the difference between the maximum and minimum elements. The task is to remove exactly one element from the array to minimize the instability of the resulting array with 'n-1' elements.

Understanding the Constraints:
    # The array can have a minimum of 2 and a maximum of 10^5 elements.
    # Each element of the array is between 1 and 10^5.

Approach:
    To minimize instability, you need to consider two cases:
    1. Remove the maximum element and calculate the instability.
    2. Remove the minimum element and calculate the instability. 
*/


#include <bits/stdc++.h>
 
using namespace std;


int main() {
 
    int n; // Array Size
    cin >> n;

    int arr[n];

    // Array Input
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array in ascending order
    sort(arr, arr + n);

    // Case 1: Calculating instability by removing the maximum element
    int instability1 = arr[n-2] -  arr[0];

    // Case 2: Calculating instability by removing the minimum element
    int instability2 = arr[n-1] -  arr[1];

    // Minimum instability after removing one element
    int minInstability = min(instability1, instability2);

    cout << minInstability << endl;

    return 0;
}