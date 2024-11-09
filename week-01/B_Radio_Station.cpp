
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, string> mp;

    for (int i = 0; i < n; i++)
    {
        string ip, name;
        cin >> name >> ip;
        mp[ip] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string cmd, cmd_ip;
        cin >> cmd >> cmd_ip;

        string ip = cmd_ip;
        ip.pop_back();

        cout << cmd << " " << cmd_ip << " #" << mp[ip] << endl;
    }

    return 0;
}