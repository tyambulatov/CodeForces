
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> stones(n, 0);
    for (auto& st : stones)
    {
        cin >> st;
    }
    vector<int64_t> b1(n + 1, 0);

    for (int i = 0; i < n; ++i)
    {
        b1[i + 1] = b1[i] + stones[i];
    }

    sort(stones.begin(), stones.end());
    vector<int64_t> b2(n + 1, 0);

    for (int i = 0; i < n; ++i)
    {
        b2[i + 1] = b2[i] + stones[i];
    }

    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << b1[r] - b1[l - 1] << '\n';
        }
        else
        {
            cout << b2[r] - b2[l - 1] << '\n';
        }
    }
}
