#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < s.size() / 2; i++) {
        swap(s[i], s[s.size() - i - 1]);
    }

    if (s == t)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    return 0;
}