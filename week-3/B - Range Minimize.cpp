#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        if (N <= 3)
        {
            cout << 0 << endl;
            continue;
        }

        int op1 = A[N - 1] - A[2];
        int op2 = A[N - 3] - A[0];
        int op3 = A[N - 2] - A[1];

        int min = op1;
        if (op2 < min)
        {
            min = op2;
        }

        if (op3 < min)
        {
            min = op3;
        }

        cout << min << endl;
    }

    return 0;
}