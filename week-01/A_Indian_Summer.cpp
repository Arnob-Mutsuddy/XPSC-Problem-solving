#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<pair<string, string>> lev;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string tree, col;
        cin >> tree >> col;
        bool find = false;
        for (int j = 0; j < lev.size(); j++)
        {
            if (lev[j].first == tree && lev[j].second == col)
            {
                find = true;
                break;
            }
        }
        if (!find)
        {
            lev.push_back({tree, col});
        }
    }
    cout << lev.size() << endl;

    return 0;
}