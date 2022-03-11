
#include <bits/stdc++.h>

using namespace std;

bool StringHasLetters(string str, string letters1, string letters2)
{

    if (str.find(letters1) != string::npos)
    {
        int pos = str.find(letters1);
        string sbuStr = {str.begin() + pos + 2, str.end()};

        if (sbuStr.find(letters2) != string::npos)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string str;
    cin >> str;

    if (StringHasLetters(str, "AB", "BA") || StringHasLetters(str, "BA", "AB"))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
