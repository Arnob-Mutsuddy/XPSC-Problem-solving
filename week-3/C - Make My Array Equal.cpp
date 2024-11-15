#include <bits/stdc++.h>>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        bool equal = true;
        bool zero = false;
        int not_zero = 0;
        int fstNotzero = -1;

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            if (A[i] != 0)
            {
                not_zero++;
                if (fstNotzero == -1)
                {
                    fstNotzero = A[i];
                }
                else if (A[i] != fstNotzero)
                {
                    equal = false;
                }
            }
            else
            {
                zero = true;
            }
        }

        if (equal || (zero && not_zero > 0 && equal))
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