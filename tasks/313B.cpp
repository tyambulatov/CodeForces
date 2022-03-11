#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <numeric>
#include <set>

using namespace std;

int main()
{
    string str;
    cin >> str;

    vector<int> isTrue(str.size() - 1);
    for (int i = 0; i < str.size() - 1; ++i)
    {
        if (str[i] == str[i + 1])
        {
            isTrue[i] = 1;
        }
    }
    partial_sum(isTrue.begin(), isTrue.end(), isTrue.begin());
    isTrue.insert(isTrue.begin(), 0);
    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        cout << *(isTrue.begin() + r - 1) - *(isTrue.begin() + l - 1) << '\n';
    }
}
