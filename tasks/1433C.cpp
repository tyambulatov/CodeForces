
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
        map<int, int> sizeToIndex;
        int BiggestSizeIndex = 1;
        int BiggestSizeValue = 0;
        int prevValue = 0;
        for (int i = 0; i < n; ++i)
        {
            int size;
            cin >> size;

            if (i == 0)
            {
                BiggestSizeValue = size;
            }
            else
            {

                if (size > BiggestSizeValue)
                {
                    BiggestSizeIndex = i + 1;
                    BiggestSizeValue = size;
                }
                else if (size < BiggestSizeValue && prevValue == BiggestSizeValue)
                {
                    BiggestSizeIndex = i;
                }
            }

            prevValue = size;
            sizeToIndex[size] = i + 1;
        }
        if (sizeToIndex.size() == 1)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << BiggestSizeIndex << '\n';
        }
    }
}
