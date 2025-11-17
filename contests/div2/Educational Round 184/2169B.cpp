#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == '>' && s[i + 1] == '<') {
            cout << -1 << endl;
            return;
        }
    }

    for (int i = 1; i < n - 1; ++i) {
        if (s[i] == '*') {
            cout << -1 << endl;
            return;
        }
    }

    if (s[0] == '*' && s[1] != '>') {
        cout << -1 << endl;
        return;
    }

    if (s[n - 1] == '*' && s[n - 2] != '<') {
        cout << -1 << endl;
        return;
    }

    int esq = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '<')
            esq++;
        else 
            break;
    }

    int dir = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == '>') 
            dir++;
        else
            break;
    }

    int maximo = max(esq, dir);

    if (s[0] == '*')
        maximo = max(maximo, 1 + dir);

    if (s[n - 1] == '*')
        maximo = max(maximo, 1 + esq);

    cout << maximo << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}