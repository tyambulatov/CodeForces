
#include <bits/stdc++.h>

using namespace std;

int64_t friendsPerTeam(const int64_t& len)
{
    return len * (len - 1) / 2;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int64_t n, m;
    cin >> n >> m;

    ;

    int64_t min = (n % m) * friendsPerTeam(n / m + 1) + (m - n % m) * friendsPerTeam(n / m);
    int64_t max = friendsPerTeam(n - (m - 1));
    cout << min << " " << max;
}
