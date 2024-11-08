#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        vector<int> num(n);

        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }

        vector<int> initial_num(n);

        for (int i = 0; i < n; i++)
        {
            int cnt;
            string cmd;
            cin >> cnt >> cmd;

            int digit = num[i];

            for (auto move : cmd)
            {
                if (move == 'D')
                {
                    digit = (digit + 1) % 10;
                }
                else if (move == 'U')
                {
                    digit = (digit + 9) % 10;
                }
            }

            initial_num[i] = digit;
        }

        for (int i = 0; i < n; i++)
        {
            cout << initial_num[i] << " ";
        }
        cout << endl;
    }
    return 0;
}