
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // horisontal
    if (y1 == y2)
    {
        int diff = abs(x1 - x2);
        cout << x1 << " " << y1 + diff << " "
             << x2 << " " << y1 + diff;
    }
    else if (x1 == x2)
    {
        int diff = abs(y1 - y2);
        cout << x1 + diff << " " << y1
             << " " << x1 + diff << " " << y2;
    }
    else if ((x1 - x2 == y1 - y2) || (x1 - x2 == -(y1 - y2)))
    {
        cout << x2 << " " << y1 << " " << x1 << " " << y2;
    }
    else
    {
        cout << -1;
    }
}
