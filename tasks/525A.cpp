#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    map<char, int> keyToValue;

    int keysNum = 0;
    for (int i = 0; i < 2 * (n - 1); ++i)
    {
        char letter;
        cin >> letter;
        if (i % 2 == 0)
        {
            keyToValue[letter]++;
        }
        else
        {
            letter = tolower(letter);
            if (keyToValue[letter] == 0)
            {
                keysNum++;
            }
            else
            {
                keyToValue[letter]--;
            }
        }
    }

    cout << keysNum;
}
