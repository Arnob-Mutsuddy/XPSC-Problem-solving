#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;

    int div = (t + 0.5) / a;

    int ans = div * b;

    cout << ans << endl;
    return 0;
}