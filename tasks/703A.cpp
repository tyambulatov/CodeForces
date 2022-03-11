#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <set>

using namespace std;

/* Test comment,
* abc */

int main()
{

    /* code */
    int n;
    cin >> n;
    int winsM = 0, winsC = 0;
    for (int i = 0; i < n; ++i)
    {
        int m, c;
        cin >> m >> c;
        if (m > c)
        {
            ++winsM;
        }
        else if (m < c)
        {
            ++winsC;
        }
    }
    if (winsM > winsC)
    {
        cout << "Mishka";
    }
    else if (winsM < winsC)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }
}
