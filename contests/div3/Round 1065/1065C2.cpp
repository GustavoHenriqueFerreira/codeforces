#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int xorA = 0, xorB = 0;
        for (int x : a) xorA ^= x;
        for (int x : b) xorB ^= x;

        if (xorA == xorB) {
            cout << "Tie\n";
            continue;
        }

        int M = xorA ^ xorB;
        int k = -1;
        for (int bit = 31; bit >= 0; bit--) {
            if ((M >> bit) & 1) {
                k = bit;
                break;
            }
        }

        int ultimo = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (((a[i] ^ b[i]) >> k) & 1) {
                ultimo = i + 1;
                break;
            }
        }

        if (ultimo % 2 == 1)
            cout << "Ajisai\n";
        else
            cout << "Mai\n";
    }
}
