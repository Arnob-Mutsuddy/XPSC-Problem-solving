#include <bits/stdc++.h>

using namespace std;

bool can_sort(const vector<int> &a)
{
    int n = a.size();
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());

    vector<int> dub_a = a;
    dub_a.insert(dub_a.end(), a.begin(), a.end());

    for (int i = 0; i < n; ++i)
    {
        bool is_same = true;
        for (int j = 0; j < n; j++)
        {
            if (dub_a[i + j] != sorted_a[j])
            {
                is_same = false;
                break;
            }
        }
        if (is_same)
            return true;
    }
    return false;
}

int main()
{
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
        if (can_sort(a))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}