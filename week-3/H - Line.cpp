#include <bits/stdc++.h>>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<long long int> v(n);
        long long int initial = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                initial += i;
                v[i] = (n - 1 - i) - i;
            }
            else
            {
                initial += (n - 1 - i);
                v[i] = i - (n - 1 - i);
            }
        }

        sort(v.rbegin(), v.rend());

        vector<long long int> ans(n);
        long long int cur = initial;

        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                cur += v[i];
            }
            ans[i] = cur;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}