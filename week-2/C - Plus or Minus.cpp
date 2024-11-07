#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c)
        {
            cout << "+" << endl;
        }
        else if (a - b == c)
        {
            cout << "-" << endl;
        }
    }

    return 0;
}