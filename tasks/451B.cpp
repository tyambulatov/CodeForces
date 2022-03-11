#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <numeric>
#include <set>

using namespace std;

int main()
{

    /* code */

    int n;
    cin >> n;
    vector<int> list(n);
    for (int& a : list)
    {
        cin >> a;
    }

    vector<int> sortedList = list;
    sort(sortedList.begin(), sortedList.end());

    // the following is the engine

    int begining = 0;
    int end = 0;
    bool started = false;
    for (int i = 1; i < n; ++i)
    {
        if (started == false)
        {
            if (list[i - 1] > list[i])
            {
                begining = i - 1;
                end = i;
                started = true;
            }
        }
        else
        {
            if (list[i - 1] >= list[i])
            {
                ++end;
            }
            else if (list[i - 1] < list[i])
            {
                started = false;
                break;
            }
        }
    }

    auto itBegin = list.begin() + begining;
    auto itEnd = list.begin() + end + 1;
    vector<int> start = {list.begin(), itBegin};
    vector<int> Reversed = {itBegin, itEnd};
    vector<int> ending = {itEnd, list.end()};

    reverse(Reversed.begin(), Reversed.end());

    start.insert(start.end(), Reversed.begin(), Reversed.end());
    start.insert(start.end(), ending.begin(), ending.end());

    if (sortedList == start)
    {
        cout << "yes" << '\n'
             << begining + 1 << " " << end + 1 << '\n';
    }
    else
    {
        cout << "no" << '\n';
    }
}
