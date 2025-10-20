#include <bits/stdc++.h>
using namespace std;

void solve(int &q){ //consegue modifica por referencia
    int p, v, s;
    cin >> p >> v >> s;

    if (p + v + s >= 2) {
        q++; 
    }
}

int main() {
    int t;

    cin >> t;
    int q = 0;

    while (t--) {
        solve(q);
    }    

    cout << q << endl;

    return 0;
}