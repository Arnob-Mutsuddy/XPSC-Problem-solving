#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--)
    {
        int n, c;
        cin >> n >> c;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> cost;
        for (int i = 0; i < n; i++)
        {
            cost.push_back(a[i] + (i + 1));
        }

        sort(cost.begin(), cost.end());

        int cnt = 0;
        for (int cost : cost)
        {
            if (c >= cost)
            {
                c -= cost;
                cnt++;
            }
            else
            {
                break;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
