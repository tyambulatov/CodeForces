
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
        int64_t num;
        cin >> num;

        if (num % 2050 != 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            int64_t numOf2050 = num / 2050;
            int64_t minNum = 0;
            for (auto digit : to_string(numOf2050))
            {
                minNum += digit - '0';
            }
            cout << minNum << '\n';
        }
    }
}
