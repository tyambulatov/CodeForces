
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> hash;
        set<int> differences;
        for (int i = 0; i < n; ++i)
        {
            int num;
            cin >> num;
            hash[num - i]++;
            differences.insert(num - i);
        }

        int64_t count = 0;
        for (auto diff : differences)
        {

            count += (long long)hash[diff] * (hash[diff] - 1) / 2;
        }
        cout << count << '\n';
    }
}
