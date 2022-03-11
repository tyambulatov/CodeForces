
#include <bits/stdc++.h>

using namespace std;

bool BreakFirst(int l1, int l2, int l3)
{
    if (l1 % 2 == 0 && l2 == l3)
    {
        return true;
    }
    else if (l1 - l2 == l3)
    {
        return true;
    }
    return false;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--) // O(100)
    {
        int l1, l2, l3;
        cin >> l1 >> l2 >> l3;
        if (BreakFirst(l1, l2, l3) || BreakFirst(l2, l1, l3) || BreakFirst(l3, l1, l2))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
