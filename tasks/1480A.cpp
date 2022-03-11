
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    cin.ignore(1);
    while (t--) // O(100)
    {
        string line;
        getline(cin, line);
        for (size_t i = 0; i < line.size(); ++i)
        {
            if (i % 2 == 0)
            {
                if (line[i] == 'a')
                {
                    cout << 'b';
                }
                else
                {
                    cout << 'a';
                }
            }
            else
            {
                if (line[i] == 'z')
                {
                    cout << 'y';
                }
                else
                {
                    cout << 'z';
                }
            }
        }
        cout << '\n';
    }
}
