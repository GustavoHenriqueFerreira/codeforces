#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    
    while (t--) {
        long long n; cin >> n;
        long long soma = 0;
        long long pos = 0;
        for (int i = 0; i < n; i++) {
            long long x; cin >> x;
            soma += x;
            if (x > 0) pos++;
        }

        long long ans = min(pos, soma - (n - 1));
        cout << ans << '\n';
    }
    return 0;
}
