
#include <bits/stdc++.h>

using namespace std;

int64_t factorial(const int64_t& n)
{
    if (n < 2)
        return n;

    return n * factorial(n - 1);
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int64_t> b(n + 1, 0);

    for (int i = 1; i < n + 1; ++i)
    {
        int64_t num;
        cin >> num;
        b[i] = b[i - 1] + num;
    }
    int64_t b3 = b.back();
    int64_t b2 = 2 * b3 / 3;
    int64_t b1 = b3 / 3;

    if (b3 % 3 != 0)
    {
        cout << 0;
    }
    else
    {

        unordered_map<int64_t, vector<int64_t>> hash;
        for (int i = 0; i < n + 1; ++i)
        {
            hash[b[i]].push_back(i);
        }

        if (b3 == 0)
        {
            int64_t size = hash[0].size() - 2;
            cout << size * (size - 1) / 2;
        }
        else
        {

            auto positionsB1 = hash[b1];
            auto positionsB2 = hash[b2];

            int64_t combinations = 0;

            // O(nlogn)
            for (int i = 0; i < positionsB1.size(); ++i)
            {
                combinations += (positionsB2.end() - upper_bound(positionsB2.begin(), positionsB2.end(), positionsB1[i]));
            }

            cout << combinations;
        }
    }
}
