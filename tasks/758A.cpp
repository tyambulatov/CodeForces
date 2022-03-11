#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <set>

using namespace std;

/* Test comment,
* abc */

int main()
{

    /* code */
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    vector<int> people;
    for (int i = 0; i < n; ++i)
    {
        int income;
        cin >> income;
        people.push_back(income);
    }
    sort(people.begin(), people.end());
    int maxIncome = people.back();

    auto finalWealthyMan = lower_bound(people.begin(), people.end(), maxIncome);

    int treasuryLoss = 0;
    for (auto it = people.begin(); it < finalWealthyMan; ++it)
    {
        treasuryLoss += (maxIncome - *it);
    }
    cout << treasuryLoss;
}
