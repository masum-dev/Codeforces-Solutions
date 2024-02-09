/*
Problem Explanation:
    Bit++ is a simple programming language with only one variable named x.
    There are two operations in Bit++: ++ and --.
    ++ increases the value of variable x by 1, while -- decreases it by 1.
    A program in Bit++ consists of multiple statements, each consisting of one operation and the variable x.

Understanding the Constraints:
    # The number of statements in the program is given by n, which is between 1 and 150, inclusive.
    # Each statement contains exactly one operation (++ or --) and one variable x.

Approach:
    1. Initialize a variable x with a value of 0.
    2. For each statement in the program:
        Check the operation:
            i) If it is ++, increment x by 1.
            ii) If it is --, decrement x by 1.
    3. After executing all the statements, the final value of x will be the desired output.
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin >> n;

    int x = 0;

    while(n) {
        
        string statement;
        cin >> statement;
        
        if(statement == "X++" || statement == "++X") {
            x++;
        }

        else if(statement == "X--" || statement == "--X") {
            x--;
        }

        n--;
    }

    cout << x << endl;

    return 0;

}