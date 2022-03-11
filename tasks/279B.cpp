
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (auto& num : a)
    {
        cin >> num;
    }

    vector<int> b(n + 1, 0);
    for (int i = n - 1; i >= 0; --i)
    {
        b[i] = b[i + 1] + a[i];
    }

    auto it = upper_bound(b.rbegin(), b.rend(), t);
    cout << it - b.rbegin() - 1;
}
