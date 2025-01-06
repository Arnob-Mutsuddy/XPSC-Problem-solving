#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;

        long long max_n = min(a, S / n);
        long long rmain_s = S - max_n * n;

        if (rmain_s <= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
