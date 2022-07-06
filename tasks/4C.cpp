#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    unordered_map<string, int> hashSistem;
    for (int i = 0; i < n; i++)
    {
        string line;
        cin >> line;
        hashSistem[line]++;

        if (hashSistem[line] == 1)
        {
            cout << "OK" << '\n';
        }
        else
        {
            cout << line << hashSistem[line] - 1 << '\n';
        }
    }
}
