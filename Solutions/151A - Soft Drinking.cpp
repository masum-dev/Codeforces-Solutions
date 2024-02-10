/*
Problem Explanation:
    A group of friends wants to make toasts using a soft drink called "Take-It-Light". They have bought some bottles of the drink, limes, and salt. Each friend needs a certain amount of drink, a slice of lime, and some salt to make a toast. The goal is to find out how many toasts each friend can make given the available resources.

Understanding the Constraints:
    n: Number of friends (1 ≤ n ≤ 1000)
    k: Number of bottles of the soft drink (1 ≤ k ≤ 1000)
    l: Milliliters of drink in each bottle (1 ≤ l ≤ 1000)
    c: Number of limes (1 ≤ c ≤ 1000)
    d: Number of slices cut from each lime (1 ≤ d ≤ 1000)
    p: Grams of salt available (1 ≤ p ≤ 1000)
    nl: Milliliters of drink required per toast (1 ≤ nl ≤ 1000)
    np: Grams of salt required per toast (1 ≤ np ≤ 1000)

Approach:
    1. Calculate the maximum number of toasts each friend can make based on the available resources of drink, lime, and salt.
    2. Output the minimum of these values, divided by the number of friends.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Input
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // Number of Toast from Drink
    int toastD = (k * l) / nl;

    // Number of Toast from Limes
    int toastL = (c * d) / 1;

    // Number of Toast from Salt
    int toastS = p / np;

    // Minimum of toastD, toastL, toastS
    int minOfToastDLS = (min(toastD, toastL) < min(toastL, toastS)) ? min(toastD, toastL) : min(toastL, toastS);

    // Number of Toast each friend can make
    int toastPerHead = minOfToastDLS / n;

    // Output
    cout << toastPerHead << endl;

    return 0;
}