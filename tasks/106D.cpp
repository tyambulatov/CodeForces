#include <bits/stdc++.h>

using namespace std;

struct PointInfo
{
    int N = 0;
    int S = 0;
    int W = 0;
    int E = 0;
};

vector<vector<PointInfo>> GetPointsInformation(const vector<vector<char>>& TMap)
{
    vector<vector<PointInfo>> res(TMap.size(), vector<PointInfo>(TMap[0].size()));

    for (int i = 1; i < TMap.size() - 1; i++)
    {
        for (int j = 1; j < TMap[0].size() - 1; j++)
        {
            PointInfo point;
            for (int z = i - 1; z >= 0; z--)
            {
                if (TMap[z][j] == '#')
                {
                    point.N = i - z;
                    break;
                }
            }

            for (int z = i + 1; z < TMap.size(); z++)
            {
                if (TMap[z][j] == '#')
                {
                    point.S = z - i;
                    break;
                }
            }

            for (int z = j - 1; z >= 0; z--)
            {
                if (TMap[i][z] == '#')
                {
                    point.W = j - z;
                    break;
                }
            }

            for (int z = j + 1; z < TMap[0].size(); z++)
            {
                if (TMap[i][z] == '#')
                {
                    point.E = z - j;
                    break;
                }
            }

            res[i][j] = point;
        }
    }
    return res;
}

bool CouldBeStart(const vector<pair<char, int>>& instructions,
                  pair<int, int> coordinate,
                  const vector<vector<PointInfo>>& InformationPoints)
{
    for (const auto& instruction : instructions)
    {

        switch (instruction.first)
        {
        case 'N':
            if (InformationPoints[coordinate.first][coordinate.second].N <= instruction.second)
            {
                return false;
            }
            coordinate.first -= instruction.second;
            break;

        case 'S':
            if (InformationPoints[coordinate.first][coordinate.second].S <= instruction.second)
            {
                return false;
            }
            coordinate.first += instruction.second;
            break;

        case 'W':
            if (InformationPoints[coordinate.first][coordinate.second].W <= instruction.second)
            {
                return false;
            }
            coordinate.second -= instruction.second;
            break;

        case 'E':
            if (InformationPoints[coordinate.first][coordinate.second].E <= instruction.second)
            {
                return false;
            }
            coordinate.second += instruction.second;
            break;
        }
    }
    return true;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<vector<char>> TMap(n, vector<char>(m));
    map<char, pair<int, int>> sights;

    cin.ignore(1);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            char newSymbol;
            cin >> newSymbol;
            TMap[i][j] = newSymbol;
            if (newSymbol >= 'A' && newSymbol <= 'Z')
            {
                sights[newSymbol] = {i, j};
            }
        }
        cin.ignore(1);
    }

    vector<vector<PointInfo>> InformationPoints = GetPointsInformation(TMap);

    int k;
    cin >> k;
    vector<pair<char, int>> instructions(k);

    for (auto& a : instructions)
    {
        cin >> a.first >> a.second;
        cin.ignore(1);
    }

    bool haveOutput = false;
    for (auto a : sights)
    {
        if (CouldBeStart(instructions, a.second, InformationPoints))
        {
            cout << a.first;
            haveOutput = true;
        }
    }

    if (!haveOutput)
    {
        cout << "no solution";
    }
}