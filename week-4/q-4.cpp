#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t; // Read the number of test cases
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c; // Read the floor numbers for each test case

        // Calculate the time for the first elevator
        int time1 = abs(1 - a);

        // Calculate the time for the second elevator
        int time2 = abs(b - c) + abs(c - 1);

        // Compare the times and output the result
        if (time1 < time2)
        {
            cout << 1 << endl;
        }
        else if (time1 > time2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}
