
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    // if (n == 1)
    // {
    //     cout << 1;
    // }
    // else if (n == 2)
    // {
    //     cout << 3;
    // }
    // else
    // {

    int64_t sum = 0;

    for (int i = 1; i < n; ++i)
    {
        sum += (n - i) * i;
    }
    sum += n;
    cout << sum;
    // }
}
