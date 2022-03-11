#include <bits/stdc++.h>

using namespace std;

int main() {
    int w;
    while (cin >> w) {
        string result = "NO";
        for (int a = 1; a <= w; ++a) {
            int b = w - a;
            if (b != 0 && (a % 2 == 0) && (b % 2 == 0)) {
                result = "YES";
                break;
            }
        }
        cout << result << endl;
    }
}
