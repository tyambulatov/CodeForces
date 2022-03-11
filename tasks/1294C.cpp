
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--) // O(100)
    {
        int n;
        cin >> n;

        set<int> nums;
        int a = 1;
        for (int i = 2; i <= sqrt(n); ++i)
        {
            if (n % i == 0)
            {
                a = i;
                break;
            }
        }

        int b = 1;
        for (int i = a + 1; i <= sqrt(n); ++i)
        {
            if (n % i == 0)
            {
                b = i;
                break;
            }
        }

        if (n % (a * b) == 0 && a != 1 && b != 1 && n / (a * b) != 1 && n / (a * b) != a && n / (a * b) != b)
        {
            cout << "YES\n"
                 << a << " " << b << " " << n / (a * b) << '\n';
        }
        else
        {
            cout << "NO\n";
        }
    }
}
