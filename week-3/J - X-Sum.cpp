#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> box(n);
        for (int i = 0; i < n; i++)
        {
            box[i].resize(m);
            for (int j = 0; j < m; j++)
            {
                cin >> box[i][j];
            }
        }

        long long int maxSum = 0;

        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < m; y++)
            {
                long long sum = 0;

                int i = x, j = y;
                while (i >= 0 && j >= 0)
                {
                    sum += box[i][j];
                    i--;
                    j--;
                }
                i = x + 1, j = y + 1;
                while (i < n && j < m)
                {
                    sum += box[i][j];
                    i++;
                    j++;
                }

                i = x, j = y;
                while (i >= 0 && j < m)
                {
                    sum += box[i][j];
                    i--;
                    j++;
                }
                i = x + 1, j = y - 1;
                while (i < n && j >= 0)
                {
                    sum += box[i][j];
                    i++;
                    j--;
                }

                sum -= box[x][y];

                maxSum = max(maxSum, sum);
            }
        }

        cout << maxSum << endl;
    }

    return 0;
}