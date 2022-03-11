#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <set>

using namespace std;

/* Test comment,
* abc */

int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> portals;
    for (int i = 0; i < n - 1; ++i)
    {
        int port;
        cin >> port;
        portals.push_back(port);
    }

    int i = 1;
    while (i < k)
    {
        i += portals[i - 1];
    }
    if (i == k)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
