
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    set<int> nums;

    for (int i = 1; i <= 31623; ++i)
    {
        nums.insert(i * i);
        if (i <= 1000)
        {
            nums.insert(i * i * i);
        }
    }

    vector<int> table;
    for (auto a : nums)
    {
        table.push_back(a);
    }

    map<int, int> mapper;

    int prevNum = table[0];
    mapper[prevNum] = 1;
    for (int i = 1; i < table.size(); ++i)
    {
        mapper[table[i]] = mapper[prevNum] + 1;
        prevNum = table[i];
    }

    while (t--) // O(100)
    {
        int num;
        cin >> num;
        cout << (mapper.upper_bound(num))->second - 1 << '\n';
    }
}
