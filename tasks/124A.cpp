
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;

    int count = 0;
    for (int i = n - b; i < n + 1; ++i)
    {
        if (a < i)
        {
            ++count;
        }
    }

    cout << count;
}
