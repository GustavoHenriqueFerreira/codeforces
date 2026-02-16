#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; string s; cin >> n >> s;
        string d = s+s;

        vector<int> um;
        for (int i = 0; i < 2*n; i++)
            if (d[i] == '1') 
                um.push_back(i);

        if (um.empty()) {
            cout << 0 << '\n';
            continue;
        }

        int ultimo = -1;
        int res = 0;
        for (int i = 0; i < 2*n; i++) {
            if (d[i] == '1')
                ultimo = i;
            else {
                if (ultimo != -1 && n >=i-ultimo)
                    res = max(res, i - ultimo);
            }
        }

        cout << res << '\n';
    }
}