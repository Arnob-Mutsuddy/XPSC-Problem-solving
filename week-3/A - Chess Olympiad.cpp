#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    double tmp = x + (y / 2.0);
    int gameNum = x + y + z;
    double opp = gameNum - tmp;

    double weNeed = (opp - tmp) + 0.5;

    int gameLeft = 4 - gameNum;
    if (weNeed >= gameLeft)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }

    return 0;
}