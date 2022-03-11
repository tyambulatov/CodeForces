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
    int n, h;
    cin >> n >> h;

    vector<int> friends;
    for (int i = 0; i < n; ++i)
    {
        int hight;
        cin >> hight;
        friends.push_back(hight);
    }
    sort(friends.begin(), friends.end());
    auto iter = upper_bound(friends.begin(), friends.end(), h);
    cout << (iter - friends.begin()) + 2 * (friends.end() - iter);
}
