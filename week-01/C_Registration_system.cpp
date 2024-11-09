
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        if (mp[name] == 0)
        {
            cout << "OK" << endl;
            mp[name] = 1;
        }
        else
        {
            cout << name << mp[name] << endl;
            mp[name]++;
        }
    }

    return 0;
}