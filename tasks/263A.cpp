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
    int n, m;
    int N = 5;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            int num;
            cin >> num;
            if (num == 1)
            {
                n = i;
                m = j;
            }
        }
    }
    cout << abs(n - 2) + abs(m - 2);
}
