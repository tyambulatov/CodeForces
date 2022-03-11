
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
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& num : a)
    {
        cin >> num;
    }

    vector<int64_t> b = CreatePrefexSum(a);

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << b[r] - b[l - 1] << '\n';
    }
}
