
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int maxZ = 0;
    int i = 0;
    while (n > 5 * pow(2, i))
    {
        n -= 5 * pow(2, i);
        ++i;
    }

    int num = (n - 1) / pow(2, i);

    string ans;
    switch (num)
    {
    case 0:
        ans = "Sheldon";
        break;
    case 1:
        ans = "Leonard";
        break;
    case 2:
        ans = "Penny";
        break;
    case 3:
        ans = "Rajesh";
        break;
    case 4:
        ans = "Howard";
        break;
    }
    cout << ans;
}
