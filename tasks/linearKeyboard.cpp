#include <bits/stdc++.h>
#include <cmath>
#include <cstdint>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        string layout;
        cin >> layout;
        string word;
        cin >> word;

        int time = 0;

        string::iterator prevIter = find(layout.begin(), layout.end(), word[0]);

        for (char& letter : word)
        {
            string::iterator newIter = find(layout.begin(), layout.end(), letter);
            time += abs(distance(prevIter, newIter));
            prevIter = newIter;
        }

        cout << time << '\n';
    }
}
