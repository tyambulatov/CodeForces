#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <numeric>
#include <set>

using namespace std;

int main()
{

    int n;
    cin >> n;
    map<int, int> bugsFirst;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        ++bugsFirst[num];
    }

    map<int, int> bugOne = bugsFirst;
    for (int i = 0; i < n - 1; ++i)
    {
        int num;
        cin >> num;
        --bugOne[num];
        if (bugOne[num] == 0)
        {
            bugOne.erase(num);
        }
    }

    map<int, int> bugTwo = bugsFirst;
    for (int i = 0; i < n - 2; ++i)
    {
        int num;
        cin >> num;
        --bugTwo[num];
        if (bugTwo[num] == 0)
        {
            bugTwo.erase(num);
        }
    }

    int firNum = bugOne.begin()->first;
    --bugTwo[firNum];
    if (bugTwo[firNum] == 0)
    {
        bugTwo.erase(firNum);
    }

    int secNum = bugTwo.begin()->first;

    cout << firNum << '\n'
         << secNum;
}
