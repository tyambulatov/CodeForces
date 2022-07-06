
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

    int l, r;
    bool hasSumZero = false;
    unordered_map<int64_t, int> hash;

    for (int i = 0; i < n; ++i)
    {
        if (hash.count(b[i]) == 1)
        {
            l = hash[b[i]] + 1;
            r = i;
            hasSumZero = true;
            break;
        }
        hash[b[i]] = i;
    }

    if (hasSumZero == false)
    {
        cout << "No zero sum" << '\n';
    }
    else
    {
        cout << "Zero sum found: " << l << " " << r << '\n';
    }
}
