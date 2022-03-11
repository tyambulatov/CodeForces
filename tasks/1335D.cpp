
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    cin.ignore(1);
    set<pair<int, int>> toChange = {{1, 1}, {2, 4}, {3, 7}, {4, 2}, {5, 5}, {6, 8}, {7, 3}, {8, 6}, {9, 9}};

    while (t--) // O(100)
    {
        for (int row = 1; row <= 9; ++row)
        {
            for (int colmn = 1; colmn <= 9; ++colmn)
            {
                char num;
                num = cin.get();
                if (toChange.count(make_pair(row, colmn)) == 1)
                {
                    if (num == '9')
                    {
                        cout << '1';
                    }
                    else
                    {
                        cout << '9';
                    }
                }
                else
                {
                    cout << num;
                }
            }
            cin.ignore(1);
            cout << '\n';
        }
    }
}
