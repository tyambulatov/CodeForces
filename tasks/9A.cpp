#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <numeric>
#include <set>

using namespace std;

int main()
{
    int Y, W;
    cin >> Y >> W;
    int possibleScore = 7 - max(Y, W);
    cout << possibleScore / gcd(possibleScore, 6) << "/" << 6 / gcd(possibleScore, 6);
}
