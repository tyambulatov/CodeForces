#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <set>

using namespace std;

/* Test comment,
* abc */

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> list;

        for (int i = 0; i < n; ++i)
        {
            int num;
            cin >> num;
            list.push_back(num);
        }
        sort(list.begin(), list.end());
        int minS = 1000;
        for (int i = 1; i < n; ++i)
        {
            minS = min(minS, abs(list[i] - list[i - 1]));
            if (minS == 0)
                break;
        }
        cout << minS << '\n';
    }
}
