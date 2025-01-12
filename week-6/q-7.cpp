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
        vector<int> a(n);
        unordered_map<int, int> freq;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        vector<int> V;
        for (const auto &p : freq)
        {
            if (p.second >= k)
            {
                V.push_back(p.first);
            }
        }

        if (V.empty())
        {
            cout << -1 << endl;
            continue;
        }

        sort(V.begin(), V.end());

        int l = V[0], r = V[0], maxL = l, maxR = r;
        for (size_t i = 1; i < V.size(); i++)
        {
            if (V[i] == V[i - 1] + 1)
            {
                r = V[i];
            }
            else
            {
                if (r - l > maxR - maxL)
                {
                    maxL = l;
                    maxR = r;
                }
                l = r = V[i];
            }
        }

        if (r - l > maxR - maxL)
        {
            maxL = l;
            maxR = r;
        }

        cout << maxL << " " << maxR << endl;
    }
    return 0;
}
