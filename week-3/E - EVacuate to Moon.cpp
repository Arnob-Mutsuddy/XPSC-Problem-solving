#include <bits/stdc++.h>>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N, M, H;
        cin >> N >> M >> H;

        vector<long long int> A(N);
        vector<long long int> B(M);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < M; i++)
        {
            cin >> B[i];
        }

        sort(A.rbegin(), A.rend());
        sort(B.rbegin(), B.rend());

        long long total = 0;

        int min_size = min(N, M);
        for (int i = 0; i < min_size; i++)
        {
            if (B[i] * H <= A[i])
            {
                total += B[i] * H;
            }
            else
            {
                total += A[i];
            }
        }

        cout << total << endl;
    }

    return 0;
}