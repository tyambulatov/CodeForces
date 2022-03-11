#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <set>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int graveyard = 0;
    int hours = 0;
    while (a > 0)
    {
        ++hours;
        --a;
        ++graveyard;
        if (b == graveyard)
        {
            ++a;
            graveyard = 0;
        }
    }
    cout << hours;
}
