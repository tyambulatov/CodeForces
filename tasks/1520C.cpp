
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
        int n;
        cin >> n;

        if (n == 2)
        {
            cout << -1 << '\n';
        }
        else
        {
            int table[n][n];
            int first = 1;
            int second = ceil(n * n / 2.0) + 1;
            bool isFirstNums = true;
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    if (isFirstNums)
                    {
                        table[i][j] = first;
                        ++first;
                    }
                    else
                    {
                        table[i][j] = second;
                        ++second;
                    }
                    isFirstNums = !isFirstNums;
                }
            }

            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    cout << table[i][j];
                    if (j == n - 1)
                    {
                        cout << '\n';
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
        }
    }
}
