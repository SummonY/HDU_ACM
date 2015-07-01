/*
Problem Description
Calculate A + B.
 
Input
Each line will contain two integers A and B. Process to end of file.
 
Output
For each case, output A + B in one line.
 
Sample Input
1 1
 
Sample Output
2
*/

#include <iostream>

using namespace std;

int main()
{
    int A, B;

    while (cin >> A >> B) {
        cout << A + B << endl;
    }
    return 0;
}
