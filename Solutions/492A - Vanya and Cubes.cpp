/*
Problem Explanation:
    Vanya has been given a certain number of cubes, and he wants to build a pyramid using them. The pyramid should be constructed in a specific way: each level of the pyramid must consist of a certain number of cubes, starting with 1 cube at the top level, 3 cubes at the second level, 6 cubes at the third level, and so on. The number of cubes required to construct each level increases by one with each successive level.

Understanding the Constraints:
    # Vanya has been given a positive integer  n representing the number of cubes.
    # The number of cubes  n given to Vanya ranges from 1 to  10^4.

Approach:
    1. Initialize variables to track the pyramid level, the number of cubes used, and a counter for calculating cubes per level.
    2. Simulate the construction process by incrementing the number of cubes used for each level of the pyramid until the total exceeds the given number of cubes n.
    3. Increment the pyramid level for each level added.
    4. After the loop, subtract 1 from the pyramid level to adjust for the extra level added in the loop just before the loop exits.
    5. Output the adjusted pyramid level as the maximum height of the pyramid that can be built with the given cubes.

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Input
    int n;
    cin >> n;

    // Variables to track pyramid level and cubes used
    int counter = 1;
    int pyramidLevel = 0;
    int cubesUsed = 0;

    // Calculate pyramid level until cubes used is less than or equal to n
    while (cubesUsed <= n)
    {
        // Increment the number of cubes used for the current level
        cubesUsed += (counter * (counter + 1)) / 2;

        // Increment the counter for the next level
        counter++;

        // Increment the pyramid level
        pyramidLevel++;
    }

    // Output
    // Subtract 1 from the pyramidLevel to adjust for the extra level added in the loop just before the loop exits.

    cout << pyramidLevel - 1 << endl;

    return 0;
}
