#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int bl_1 = -1, bl_2 = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (bl_1 == -1)
                {
                    bl_1 = i;
                }
                bl_2 = i;
            }
        }

        int size = (bl_2 - bl_1) + 1;
        cout << size << endl;
    }
    return 0;
}