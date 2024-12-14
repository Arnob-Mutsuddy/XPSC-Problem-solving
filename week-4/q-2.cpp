#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        int draw = max(X, Y);
        for (int i = 0; i <= min(X, Y); i++)
        {
            if ((X - i) % 3 == 0 && (Y - i) % 3 == 0)
            {
                draw = i;
                break;
            }
        }

        cout << draw << endl;
    }
    return 0;
}
