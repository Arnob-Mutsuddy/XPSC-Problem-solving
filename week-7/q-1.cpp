
#include <bits/stdc++.h>
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
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int opScore = INT_MAX;

        for (int i = 0; i < N; i++)
        {
            int maxDiff = INT_MIN;

            if (i > 0)
            {
                maxDiff = max(maxDiff, abs(A[i] - A[i - 1]));
            }
            if (i < N - 1)
            {
                maxDiff = max(maxDiff, abs(A[i] - A[i + 1]));
            }

            opScore = min(opScore, maxDiff);
        }

        cout << opScore << endl;
    }
    return 0;
}
