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
    vector<int> nums(n);
    for (auto& a : nums)
    {
        cin >> a;
    }

    set<int> uniqueNums;
    // O(NlogN)
    for (int i = n - 1; i >= 0; --i)
    { // O(N)
        int num;
        num = nums[i];

        if (i == n - 1)
        {
            nums[i] = 1;
            uniqueNums.insert(num);
            continue;
        }

        nums[i] = nums[i + 1];
        if (uniqueNums.count(num) == 0) // O(logN)
        {
            uniqueNums.insert(num);
            ++nums[i];
        }
    }

    for (int i = 0; i < m; ++i)
    {
        int l;
        cin >> l;
        cout << *(nums.begin() + l - 1) << '\n';
    }
}
