#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <set>

using namespace std;

int main()
{

    vector<int64_t> powersOfTwo;
    int64_t twoInPower = 2;
    while (twoInPower <= (pow(10, 14)))
    {
        powersOfTwo.push_back(twoInPower);
        twoInPower *= 2;
    }

    int n;
    cin >> n;

    while (n--)
    {
        uint64_t num;
        cin >> num;
        if (binary_search(powersOfTwo.begin(), powersOfTwo.end(), num))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
