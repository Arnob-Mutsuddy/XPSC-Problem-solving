#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    map<string, string> finalHandles;
    map<string, string> currentHandles;
    vector<string> originalOrder;

    for (int i = 0; i < q; i++)
    {
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;

        if (currentHandles.find(old_handle) != currentHandles.end())
        {
            // This means old_handle is already associated with an initial handle
            string initial_handle = currentHandles[old_handle];
            finalHandles[initial_handle] = new_handle;   // Update final handle
            currentHandles.erase(old_handle);            // Remove old handle
            currentHandles[new_handle] = initial_handle; // Map new handle to initial handle
        }
        else
        {
            // This is a new initial handle (first-time encounter)
            finalHandles[old_handle] = new_handle;   // Map it to the new handle
            currentHandles[new_handle] = old_handle; // Associate new handle with this initial one
            originalOrder.push_back(old_handle);     // Track the initial handle's order
        }
    }

    // Output the result
    cout << originalOrder.size() << '\n';
    for (const auto &initial_handle : originalOrder)
    {
        cout << initial_handle << " " << finalHandles[initial_handle] << '\n';
    }

    return 0;
}