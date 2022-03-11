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
    for (int i = 0; i < t; ++i)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a, b;
        for (int j = 0; j < n; ++j)
        {
            int num;
            cin >> num;
            a.push_back(num);
        }
        for (int j = 0; j < n; ++j)
        {
            int num;
            cin >> num;
            b.push_back(num);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i = 0; i < k; ++i)
        {
            if (a[i] < b[b.size() - 1 - i])
            {
                a[i] = b[b.size() - 1 - i];
            }
            else
            {
                break;
            }
        }
        cout << accumulate(a.begin(), a.end(), 0) << '\n';
    }
}
