
#include <bits/stdc++.h>

using namespace std;

class numSymbols
{
public:
    bool OneIsMissing() const
    {
        if (one_ == 0 || two_ == 0 || three_ == 0)
        {
            return true;
        }
        return false;
    }
    void AddNewSymbol(const char& num)
    {
        if (num == '1')
        {
            ++one_;
        }
        else if (num == '2')
        {
            ++two_;
        }
        else
        {
            ++three_;
        }
    }
    void RemoveSymbol(const char& num)
    {
        if (num == '1')
        {
            --one_;
        }
        else if (num == '2')
        {
            --two_;
        }
        else
        {
            --three_;
        }
    }

private:
    int one_ = 0;
    int two_ = 0;
    int three_ = 0;
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    cin.ignore(1);
    while (t--)
    {
        string line;
        getline(cin, line);

        int minLength = 200'001;
        string::iterator itBegin = line.begin();
        string::iterator itEnd = line.begin();

        numSymbols symbols;
        while (!(symbols.OneIsMissing() && itEnd == line.end()))
        {
            if (symbols.OneIsMissing())
            {
                symbols.AddNewSymbol(*itEnd);
                ++itEnd;
            }
            else
            {
                symbols.RemoveSymbol(*itBegin);
                ++itBegin;
            }

            if (!symbols.OneIsMissing())
            {
                minLength = (distance(itBegin, itEnd) < minLength) ? distance(itBegin, itEnd) : minLength;
            }
        }

        if (minLength == 200'001)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << minLength << '\n';
        }
    }
}
