
#include <bits/stdc++.h>

using namespace std;

vector<int64_t> CreatePrefexSum(const vector<int>& a)
{
    vector<int64_t> b(a.size() + 1, 0);
    for (int i = 0; i < a.size(); ++i)
    {
        b[i + 1] = b[i] + a[i];
    }
    return b;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& num : a)
    {
        cin >> num;
    }

    vector<int> b(n);
    for (auto& num : b)
    {
        cin >> num;
    }

    vector<int64_t> partSumA = CreatePrefexSum(a);
    vector<int64_t> partSumB = CreatePrefexSum(b);

    vector<int64_t> diff(n + 1, 0);
    for (int i = 0; i < n + 1; ++i)
    {
        diff[i] = partSumA[i] - partSumB[i];
    }

    bool hasEqual = false;
    int l, r;

    unordered_map<int64_t, int> hash;
    for (int i = 0; i < n + 1; ++i)
    {
        if (hash.count(diff[i]) == 1)
        {
            hasEqual = true;
            l = hash[diff[i]] + 1;
            r = i;
            break;
        }
        hash[diff[i]] = i;
    }

    if (hasEqual)
    {
        cout << "Has equal: " << l << " " << r << '\n';
    }
    else
    {
        cout << "No equal" << '\n';
    }
}
