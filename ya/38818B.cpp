#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> table(n, vector<char>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // vector[i][j];

            char ch;
            cin >> ch;
            if (ch >= 'A' && ch <= 'Z')
            {
                table[i][j] = ch;
            }
            else
            {
                table[i][j] = '.';
            }
        }
    }

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char tmp = table[n - 1 - i][j];
            table[n - 1 - i][j] = table[i][j];
            table[i][j] = tmp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m / 2; j++)
        {
            char tmp = table[i][m - 1 - j];
            table[i][m - 1 - j] = table[i][j];
            table[i][j] = tmp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch = table[i][j];
            if (ch >= 'A' && ch <= 'Z')
            {
                table[i - 1][j] = '_';
                table[i][j - 1] = '/';
                table[i][j + 1] = '\\';
                table[i + 1][j - 1] = '\\';
                table[i + 1][j] = '_';
                table[i + 1][j + 1] = '/';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << table[i][j];
            if (j == m - 1)
            {
                cout << '\n';
            }
        }
    }
}
