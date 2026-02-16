#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << 1 << "\n";
            continue;
        }
        if (n == 2) {
            cout << 9 << "\n";
            continue;
        }

        int s1 = 4 * n* n - n - 4;
        int s2 = 5 * n * n - 5*n - 5;

        cout << max(s1, s2) << "\n";
    }
    return 0;
}
