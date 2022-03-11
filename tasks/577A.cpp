#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <numeric>
#include <set>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    int counter = 0;
    for (int i = 1; i < sqrt(x); ++i)
    {
        if (x % i == 0 && x / i <= n && i <= n)
        {
            ++counter;
        }
    }
    counter *= 2;
    if (floor(sqrt(x)) == ceil(sqrt(x)) && sqrt(x) <= n)
    {
        ++counter;
    }
    cout << counter;
}
