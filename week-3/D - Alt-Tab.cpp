#include <bits/stdc++.h>>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> v(N);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    vector<string> order;
    map<string, bool> find;

    for (int i = N - 1; i >= 0; i--)
    {
        if (find[v[i]] == false)
        {
            order.push_back(v[i]);
            find[v[i]] = true;
        }
    }

    string result;

    for (int i = 0; i < order.size(); i++)
    {
        const string &name = order[i];
        int len = name.size();
        result += name[len - 2];
        result += name[len - 1];
    }

    cout << result << endl;

    return 0;
}