#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool find = false;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            cout << i << endl;
            find = true;
            break;
        }
    }
    if (find == false)
    {
        cout << -1 << endl;
    }
    return 0;
}