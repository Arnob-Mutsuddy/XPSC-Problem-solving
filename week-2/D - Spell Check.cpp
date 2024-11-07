#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        if (n != 5)
        {
            cout << "NO" << endl;
            continue;
        }

        int t = 0, i = 0, m = 0, u = 0, r = 0;

        for (auto c : s)
        {
            if (c == 'T')
                t++;
            else if (c == 'i')
                i++;
            else if (c == 'm')
                m++;
            else if (c == 'u')
                u++;
            else if (c == 'r')
                r++;
        }

        if (t == 1 && i == 1 && m == 1 && u == 1 && r == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}