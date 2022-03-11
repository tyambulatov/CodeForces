#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <numeric>
#include <set>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    vector<int> numsPerTv(n);
    for (auto& num : numsPerTv)
    {
        cin >> num;
    }
    sort(numsPerTv.begin(), numsPerTv.end());
    int itMax = lower_bound(numsPerTv.begin(), numsPerTv.end(), 0) - numsPerTv.begin();
    int itNumberToBuy = min(itMax, m);
    cout << -accumulate(numsPerTv.begin(), numsPerTv.begin() + itNumberToBuy, 0) << '\n';
}
