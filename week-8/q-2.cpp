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
        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int min_score = INT_MAX;

        for (int i = 0; i < N; i++)
        {
            int max_i = 0;

            if (i > 0)
            {
                max_i = max(max_i, abs(A[i] - A[i - 1]));
            }
            if (i < N - 1)
            {
                max_i = max(max_i, abs(A[i] - A[i + 1]));
            }

            min_score = min(min_score, max_i);
        }

        cout << min_score << "\n";
    }

    return 0;
}
