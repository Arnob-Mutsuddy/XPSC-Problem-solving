
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> Card(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Card[i];
    }

    int left = 0, right = n - 1;
    int sj = 0, dm = 0;

    for (int Count = 0; left <= right; Count++)
    {

        if (Card[left] < Card[right])
        {
            if (Count % 2 == 0)
            {
                sj += Card[right];
            }
            else
            {
                dm += Card[right];
            }
            right--;
        }
        else
        {

            if (Count % 2 == 0)
            {
                sj += Card[left];
            }
            else
            {
                dm += Card[left];
            }
            left++;
        }
    }

    cout << sj << " " << dm << endl;
    return 0;
}