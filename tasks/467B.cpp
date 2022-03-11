
#include <bits/stdc++.h>

using namespace std;

int numOfCommonSoldates(int num)
{
    int count = 0;
    for (; num; count++)
        num &= (num - 1);
    return count;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> soldatesOfPlayer(m + 1);
    for (int i = 0; i < m + 1; ++i) // O(m)
    {
        int num;
        cin >> num;
        soldatesOfPlayer[i] = num;
    }

    const int mainPlayer = soldatesOfPlayer.back();
    vector<int> commonSoldates(m);

    // O(m*2^n)
    for (int i = 0; i < m; ++i) // O(m);
    {
        soldatesOfPlayer[i] ^= mainPlayer;                            // O(n)
        commonSoldates[i] = numOfCommonSoldates(soldatesOfPlayer[i]); // O(n)
    }

    sort(commonSoldates.begin(), commonSoldates.end());                     // O(mlogm)
    auto it = upper_bound(commonSoldates.begin(), commonSoldates.end(), k); //O(logm)
    cout << it - commonSoldates.begin() << '\n';
}
