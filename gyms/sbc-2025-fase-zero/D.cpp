#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string s, t; cin >> s >> t;

    int total = 0, colapsaram = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') {
            total++;
            if (t[i] != '*')
                colapsaram++;
        }
    }

    cout << fixed << setprecision(2) << (double)colapsaram / total << '\n';
    
    return 0;
}