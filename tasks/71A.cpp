#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int wordSize = 0;
        char first, last;
        string word = "";

        cin >> first;
        cout << first;
        
        while (cin.peek() != '\n') {
            cin >> last;
            if (wordSize < 9) {
                word += string(1, last);
            }
            ++wordSize;
        }
        if (wordSize <= 9) {
            cout << word;
        } else {
            cout << --wordSize << last;
        }
        cout << endl;
    }
}
