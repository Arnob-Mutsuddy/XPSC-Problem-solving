#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> frq(26, 0);
        for (int i = 0; i < n; i++)
        {
            int val = s[i] - 'a';
            frq[val]++;
        }

        int odd = 0;
        for (int i = 0; i < 26; i++)
        {
            if (frq[i] % 2 != 0)
            {
                odd++;
            }
        }

        int len = n - k;
        if (len % 2 == 0)
        {

            if (odd <= k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {

            if (odd <= k + 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}