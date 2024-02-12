/*
Problem Explanation:
    Anton has a collection of regular polyhedrons, each identified by its name. He wants to find out the total number of faces in his collection.

Understanding the Constraints:
    # There are five types of regular polyhedrons: Tetrahedron, Cube, Octahedron, Dodecahedron and Icosahedron.
    # The number of polyhedrons in Anton's collection n ranges from 1 to 200,000.
    # Each polyhedron's name is given as a string.

Approach:
    1. Iterate through each polyhedron in Anton's collection.
    2. For each polyhedron, determine the number of faces based on its type:
            Tetrahedron: 4 triangular faces
            Cube: 6 square faces
            Octahedron: 8 triangular faces
            Dodecahedron: 12 pentagonal faces
            Icosahedron: 20 triangular faces
    3. Sum up the total number of faces for all polyhedrons in Anton's collection.
    4. Output the total number of faces.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Number of Test Cases
    int t;
    cin >> t;

    // Counter to count the number of faces
    int counter = 0;

    while (t--)
    {
        string polyhedrons;
        cin >> polyhedrons;
        if (polyhedrons == "Tetrahedron")
        {
            counter += 4;
        }
        else if (polyhedrons == "Cube")
        {
            counter += 6;
        }
        else if (polyhedrons == "Octahedron")
        {
            counter += 8;
        }
        else if (polyhedrons == "Dodecahedron")
        {
            counter += 12;
        }
        else if (polyhedrons == "Icosahedron")
        {
            counter += 20;
        }
    }

    // Output
    cout << counter << endl;

    return 0;
}