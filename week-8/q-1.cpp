#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int moves = 0;
        int top = -1;

        for (char ch : S)
        {
            if (top >= 0 && S[top] != ch)
            {
                --top;
                ++moves;
            }
            else
            {
                S[++top] = ch;
            }
        }

        if (moves % 2 == 1)
        {
            cout << "Zlatan\n";
        }
        else
        {
            cout << "Ramos\n";
        }
    }

    return 0;
}
