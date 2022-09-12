#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    string mass;
    cin >> mass;
    mass += '0';

    string res;
    auto itBegin = mass.begin();
    while (itBegin != mass.end())
    {
        auto newItBegin = find(itBegin, mass.end(), '0');

        res += to_string(newItBegin - itBegin);

        if (newItBegin != mass.end())
        {

            itBegin = ++newItBegin;
        }
        else
        {
            itBegin = newItBegin;
        }
    }
    cout << res;
}