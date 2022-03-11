
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& num : a)
    {
        cin >> num;
    }

    vector<int64_t> b(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        b[i + 1] = b[i] + a[i];
    }

    vector<int64_t> sortedB = b;
    sort(sortedB.begin(), sortedB.end());

    int partialSum;
    bool hasSumZero = false;
    for (int i = 0; i < n; ++i)
    {
        if (sortedB[i] == sortedB[i + 1])
        {
            partialSum = sortedB[i];
            hasSumZero = true;
            break;
        }
    }

    if (hasSumZero == false)
    {
        cout << "No zero sum" << '\n';
    }
    else
    {
        auto l = find(b.begin(), b.end(), partialSum);
        auto r = find(l + 1, b.end(), partialSum) - b.begin();
        cout << "Zero sum found: " << l - b.begin() + 1 << " " << r << '\n';
    }
}
