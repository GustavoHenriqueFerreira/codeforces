#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        if (b >= a) {
            cout << 1 << '\n';
            continue;
        }
        long long k = a / b;
        if (n <= k) cout << 1 << '\n';
        else cout << 2 << '\n';
    }
    return 0;
}
