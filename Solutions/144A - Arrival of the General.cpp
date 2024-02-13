/*
Problem Explanation:
    A general is inspecting a military squad where soldiers are lined up arbitrarily. The soldiers should stand in the order of non-increasing height, meaning the first soldier should have the maximum height, and the last soldier should have the minimum height. The goal is to determine the minimum number of seconds needed to rearrange the soldiers to meet this requirement.

Understanding the Constraints:
    # There are n soldiers in the squad, where 2 ≤ n ≤ 100.
    # Each soldier's height is represented by an integer between 1 and 100.

Approach:
    1. Since the soldiers must be arranged in non-increasing order of height, the soldiers at the beginning and end of the line are the ones that matter.
    2. Find the position and height of the tallest and shortest soldiers
    3. Calculate the minimum number of swaps needed to arrange the soldiers in the desired order
        i) If the shortest soldier is located after the tallest soldier. Calculate swapsNeeded as maxPos + (n - 1 - minPos).
        ii) If the shortest soldier is located before the tallest soldier. Calculate swapsNeeded as maxPos + (n - 1 - minPos). Subtract 1 because the tallest soldier is already at the front.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Input the number of soldiers
    int n;
    cin >> n;

    // Vector to store heights of soldiers
    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    // Find the position and height of the tallest and shortest soldiers
    int maxHeight = heights[0], minHeight = heights[0];
    int maxPos = 0, minPos = 0;
    for (int i = 0; i < n; i++)
    {
        if (heights[i] > maxHeight)
        {
            maxHeight = heights[i];
            maxPos = i;
        }
        if (heights[i] <= minHeight)
        {
            minHeight = heights[i];
            minPos = i;
        }
    }

    // Calculate the minimum number of swaps needed to arrange the soldiers in the desired order
    if (minPos > maxPos)
    {
        // If the shortest soldier is located after the tallest soldier
        int swapsNeeded = maxPos + (n - 1 - minPos);
        cout << swapsNeeded << endl;
    }
    else
    {
        // If the shortest soldier is located before the tallest soldier
        // Subtract 1 because the tallest soldier is already at the front
        int swapsNeeded = maxPos + (n - 1 - minPos) - 1;
        cout << swapsNeeded << endl;
    }

    return 0;
}