#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> word;
    for (char c : s)
    {
        word.insert(c);
    }

    bool find = false;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (word.count(i) == 0)
        {
            cout << i << endl;
            find = true;
            break;
        }
    }

    if (!find)
    {
        cout << "None" << endl;
    }

    return 0;
}