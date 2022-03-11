
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        cin.ignore(1);

        // inline size_t key(int i, int j) { return (size_t)i << 32 | (unsigned int)j; }
        map<pair<int, int>, int> singular;
        int numDoubles = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                char symbol;
                cin >> symbol;
                if (j == m - 1)
                {
                    cin.ignore(1);
                }

                if (symbol == '*')
                {
                    continue;
                }
                else
                {
                    // If you can rotate 1x2 tiles

                    // if (i != 0 && singular.count({i - 1, j}) == 1)
                    // {
                    //     numDoubles++;
                    //     singular.erase({i - 1, j});
                    // }
                    // else
                    if (j != 0 && (singular.count({i, j - 1}) == 1))
                    {
                        numDoubles++;
                        singular.erase({i, j - 1});
                    }
                    else
                    {
                        singular[{i, j}]++;
                    }
                }
            }
        }

        if (2 * x < y)
        {
            cout << (2 * numDoubles + singular.size()) * x << '\n';
        }
        else
        {
            cout << y * numDoubles + x * singular.size() << '\n';
        }
    }
}
