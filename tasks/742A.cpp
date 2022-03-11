
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int ans = 1;
    if (n != 0)
    {
        int option = n % 4;

        switch (option)
        {
        case 1:
            ans = 8;
            break;
        case 2:
            ans = 4;
            break;
        case 3:
            ans = 2;
            break;
        case 0:
            ans = 6;
            break;
        }
    }
    cout << ans;
}