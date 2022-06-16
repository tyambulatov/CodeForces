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
        int n, m;
        cin >> n >> m;
        cin.ignore(1);

        int minChange = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                char direction;
                cin >> direction;

                if (j == m - 1 && i != n - 1)
                {
                    if (direction == 'R')
                    {
                        minChange++;
                    }
                    cin.ignore(1);
                }
                else if (i == n - 1 && j != m - 1)
                {
                    if (direction == 'D')
                    {
                        minChange++;
                    }
                }
            }
        }

        cout << minChange << '\n';
    }
}
