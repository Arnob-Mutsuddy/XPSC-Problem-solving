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

        map<int, int> freq;
        vector<int> p;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int x;
                cin >> x;
                freq[x]++;
            }
        }

        for (auto it : freq)
        {
            int key = it.first;
            int value = it.second;
            if (value == n - 1)
            {
                p.push_back(key);
            }
        }

        for (int num : p)
        {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}