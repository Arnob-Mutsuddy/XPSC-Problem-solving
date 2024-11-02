#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> num(n);

    long long int sum = 0;
    long long int minOdd = 1e9 + 1;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        sum += num[i];

        if (num[i] % 2 != 0)
        {
            minOdd = min(minOdd, num[i]);
        }
    }

    if (sum % 2 != 0)
    {
        sum = sum - minOdd;
    }

    cout << sum << endl;
    return 0;
}