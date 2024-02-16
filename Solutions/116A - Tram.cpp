/*
Problem Explanation:
    - The problem describes a tram line with  n  stops.
    - At each stop, some passengers exit the tram, and some passengers enter it.
    - The tram starts empty and becomes empty again after reaching the last stop.
    - The task is to calculate the minimum capacity of the tram such that the number of people inside the tram never exceeds this capacity.

Understanding the Constraints:
    #  2 <= n <= 1000 : The number of tram stops ranges from 2 to 1000.
    #  0 <= a_i, b_i <= 1000 : The number of passengers exiting or entering at each stop can be between 0 and 1000.
    # The number of people exiting at any stop does not exceed the total number of people in the tram before arriving at that stop.
    # The tram is empty at the first stop ( a_1 = 0 ).
    # All passengers exit the tram at the last stop ( b_n = 0 ).

Approach:
    1. Iterate through each stop of the tram.
    2. Keep track of the current number of passengers inside the tram.
    3. At each stop, subtract the number of exiting passengers and add the number of entering passengers to the current count.
    4. Update the minimum capacity needed to accommodate the maximum number of passengers observed during the journey.

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Input: Number of tram stops
    int n;
    cin >> n;

    // Variables to track the minimum needed capacity and the current total passengers
    int minCapacity = 0;
    int currentPassengers = 0;

    // Iterate through each tram stop
    for (int i = 0; i < n; i++)
    {
        // Input: Number of passengers exiting and entering at the current stop
        int exiting, entering;
        cin >> exiting >> entering;

        // Calculate the change in passengers at the current stop
        int change = entering - exiting;

        // Update the current total passengers
        currentPassengers += change;

        // Update the minimum needed capacity if the current total exceeds it
        if (currentPassengers > minCapacity)
        {
            minCapacity = currentPassengers;
        }
    }

    // Output: Minimum needed capacity
    cout << minCapacity << endl;

    return 0;
}
