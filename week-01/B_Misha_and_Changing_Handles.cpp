#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    map<string, string> fi_han;
    map<string, string> cur_han;
    vector<string> order;

    for (int i = 0; i < q; i++)
    {
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;

        if (cur_han.find(old_handle) != cur_han.end())
        {

            string initial = cur_han[old_handle];
            fi_han[initial] = new_handle;
            cur_han.erase(old_handle);
            cur_han[new_handle] = initial;
        }
        else
        {

            fi_han[old_handle] = new_handle;
            cur_han[new_handle] = old_handle;
            order.push_back(old_handle);
        }
    }

    cout << order.size();
    cout << '\n';
    for (const auto &initial : order)
    {
        cout << initial << " " << fi_han[initial] << '\n';
    }

    return 0;
}
