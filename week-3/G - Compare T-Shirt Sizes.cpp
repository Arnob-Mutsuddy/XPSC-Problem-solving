#include <bits/stdc++.h>>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        char A = a.back();
        char B = b.back();
        int cntA = a.size() - 1;
        int cntB = b.size() - 1;

        if (A == B)
        {

            if (A == 'S')
            {
                if (cntA < cntB)
                {
                    cout << '>' << '\n';
                }
                else if (cntA > cntB)
                {
                    cout << '<' << '\n';
                }
                else
                {
                    cout << '=' << '\n';
                }
            }
            else if (A == 'L')
            {
                if (cntA < cntB)
                {
                    cout << '<' << '\n';
                }
                else if (cntA > cntB)
                {
                    cout << '>' << '\n';
                }
                else
                {
                    cout << '=' << '\n';
                }
            }
            else
            {

                cout << '=' << '\n';
            }
        }
        else
        {

            if (A == 'M')
            {
                if (B == 'L')
                {
                    cout << '<' << '\n';
                }
                else
                {
                    cout << '>' << '\n';
                }
            }
            else if (A == 'S')
            {
                cout << '<' << '\n';
            }
            else
            {
                cout << '>' << '\n';
            }
        }
    }
    return 0;
}