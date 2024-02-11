/*
Problem Explanation:
    Three friends live on a straight line, each at a different point. They want to meet at a single point to celebrate the New Year together. The goal is to find the minimum total distance the friends need to travel in order to meet at some point.

Understanding the Constraints:
    # x1, x2, x3: Coordinates of the houses of the first, second, and third friends respectively. Each coordinate is an integer between 1 and 100.

Approach:
    To minimize the total distance traveled, the friends should meet at the median point among their positions.
        1. Sort the coordinates of the friends' houses in ascending order.
        2. The median coordinate will be the optimal meeting point.
        3. Calculate the distance each friend needs to travel to reach this meeting point.
        4. The minimum total distance will be the sum of these distances.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Input
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    // Sorting in ascending order
    sort(arr, arr + 3);

    // First friend's travel distance from median point
    int firstFriendTravel = arr[1] - arr[0];
    // Third friend's travel distance from median point
    int thirdFriendTravel = arr[2] - arr[1];

    // Output
    cout << firstFriendTravel + thirdFriendTravel << endl;

    return 0;
}