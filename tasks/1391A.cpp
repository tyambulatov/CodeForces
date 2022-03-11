
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

        int start = n / 2 + 1;
        int antiStart = n / 2;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                cout << start << " ";
                ++start;
            }
            else
            {
                cout << antiStart << " ";
                --antiStart;
            }
        }
        cout << '\n';
    }
}
