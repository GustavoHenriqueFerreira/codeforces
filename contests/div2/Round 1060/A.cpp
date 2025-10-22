#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int ans = 0;
        int ultimo_um = -k; // última posição de QUALQUER 1

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (i - ultimo_um >= k) {
                    ans++;
                    // protegemos este 1
                }
                ultimo_um = i; // sempre atualiza
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
