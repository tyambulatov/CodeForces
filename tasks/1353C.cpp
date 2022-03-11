
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int64_t num;
        cin >> num;
        num = num / 2;
        cout << 4 * num * (num + 1) * (2 * num + 1) / 3 << '\n';
    }
}
