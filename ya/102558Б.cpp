#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    unordered_map<int, char> numToLetter;
    char letter = 'a';
    for (int i = 0; i < 26; i++)
    {
        numToLetter[pow(2, i)] = letter;
        letter++;
    }
    numToLetter[pow(2, 26)] = ' ';

    int n;
    cin >> n;

    int W = 0;
    for (int i = 0; i < n; i++)
    {
        int newNum;
        cin >> newNum;

        int realNum = abs(newNum - W);
        if (realNum != 0)
        {
            cout << numToLetter[realNum];
        }

        W = newNum;
    }
}
