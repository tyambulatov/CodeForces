#include <bits/stdc++.h>
#include <cstdint>

using namespace std;

int main()
{
    uint64_t n, m, a, w, h;
    cin >> n >> m >> a;
    w = (n - 1) / a + 1;
    h = (m - 1) / a + 1;

    uint64_t answ = w * h;
    cout << answ;
}
