#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    deque<int> mass(n);
    for (auto& a : mass)
    {
        cin >> a;
    }
    mass.push_front(0);
    mass.push_back(1001);

    vector<int> difference(n + 1);

    for (int i = 0; i < n + 1; ++i)
    {
        difference[i] = mass[i + 1] - mass[i];
    }

    int sizeToDelete = 0;
    int sizeSequenceOnes = 0;
    for (size_t i = 0; i < difference.size(); ++i)
    {
        if (difference[i] == 1)
        {
            sizeSequenceOnes++;
            if (i == difference.size() - 1)
            {
                sizeToDelete = max(sizeToDelete, sizeSequenceOnes - 1);
            }
        }
        else
        {
            if (sizeSequenceOnes > 1)
            {
                sizeToDelete = max(sizeToDelete, sizeSequenceOnes - 1);
            }
            sizeSequenceOnes = 0;
        }
    }

    cout << sizeToDelete;
}
