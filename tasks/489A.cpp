#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> sorted(n);
    for (auto& a : sorted)
    {
        cin >> a;
    }

    vector<int> unsorted = sorted;
    sort(sorted.begin(), sorted.end());
    vector<pair<int, int>> swaps;

    for (int i = 0; i < n - 1; i++)
    {
        if (unsorted[i] != sorted[i])
        {
            auto it = find(unsorted.begin() + i, unsorted.end(), sorted[i]);
            swap(unsorted[i], *it);
            swaps.push_back({i, it - unsorted.begin()});
        }
    }

    cout << swaps.size() << '\n';
    for (auto a : swaps)
    {
        cout << a.first << " " << a.second << '\n';
    }
}