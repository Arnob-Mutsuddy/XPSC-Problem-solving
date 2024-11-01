#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int coin_A = A + (A - 1);
    int coin_B = B + (B - 1);
    int both = A + B;
    int mex;

    if (coin_A > coin_B)
    {
        mex = coin_A;
    }
    else
    {
        mex = coin_B;
    }
    if (both > mex)
    {
        mex = both;
    }

    cout << mex << endl;
    return 0;
}