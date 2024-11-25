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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        set<int> find;
        int lenght = n;

        for (int i = n - 1; i >= 0; i--)
        {
            if (find.count(a[i]))
            {
                break;
            }
            find.insert(a[i]);
            lenght--;
        }

        cout << lenght << endl;
    }

    return 0;
}