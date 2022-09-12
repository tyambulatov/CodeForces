#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;

    if (n - 1 == a && n != 1)
    {
        cout << -1;
    }
    else
    {

        int startValue = 1;

        cout << startValue << ' ';
        n--;

        if (b == 0 && n != 0)
        {
            cout << startValue << ' ';
            n--;
        }
        else
        {

            for (int i = 0; i < b; ++i)
            {
                startValue *= 2;
                cout << startValue << ' ';
                n--;
            }
        }

        for (int i = 0; i < a; ++i)
        {
            startValue += 1;
            cout << startValue << ' ';
            n--;
        }

        for (int i = 0; i < n; ++i)
        {
            cout << startValue << ' ';
        }
    }
}