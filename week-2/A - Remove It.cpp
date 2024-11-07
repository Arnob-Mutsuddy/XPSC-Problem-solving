
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (A[i] != x)
        {
            ans.push_back(A[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << ans[i];
    }
    cout << endl;

    return 0;
}