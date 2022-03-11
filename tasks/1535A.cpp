#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <numeric>
#include <set>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> powers(4);
        for (int& num : powers)
        {
            cin >> num;
        }
        set<int> semiFinal = {(powers[0] > powers[1]) ? powers[0] : powers[1],
                              (powers[2] > powers[3]) ? powers[2] : powers[3]};
        sort(powers.begin(), powers.end());
        if (semiFinal == set<int>({powers[2], powers[3]}))
        {
            cout << "YES" << '\n';
            continue;
        }
        cout << "NO" << '\n';
    }
}
