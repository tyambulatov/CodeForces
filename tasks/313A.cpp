#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <set>

using namespace std;

/* Test comment,
* abc */

int main()
{

    int n;
    cin >> n;
    if (n >= 10)
    {
        cout << n;
        return 0;
    }
    n = -n;
    int firstNum = (n % 100) / 10;
    int secondNum = n % 10;
    if (firstNum > secondNum)
    {
        n = (n / 100) * 10 + secondNum;
    }
    else
    {
        n = n / 10;
    }
    cout << -n;
    /* code */

    /* code */
}
