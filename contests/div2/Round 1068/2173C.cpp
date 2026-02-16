#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        long long maxA = a.empty() ? 0 : a.back();
        int distinct = (int)a.size();
        unordered_set<long long> have(a.begin(), a.end());
        vector<long long> ans;

        for (long long x : a) {
            bool bad = false;

            // 1) se já existe divisor em ans, pula (x já será coberto)
            for (long long d = 1; d * d <= x; ++d) {
                if (x % d == 0) {
                    long long d1 = d;
                    long long d2 = x / d;
                    if (d1 < x && binary_search(ans.begin(), ans.end(), d1)) { bad = true; break; }
                    if (d2 < x && binary_search(ans.begin(), ans.end(), d2)) { bad = true; break; }
                }
            }
            if (bad) continue;

            // 2) quantos múltiplos de x até k são necessários
            long long need = k / x;

            // se mais múltiplos necessários do que elementos distintos -> impossível
            if (need > distinct) continue;

            // se existe múltiplo <= k que é > maxA -> falta no array -> impossível
            long long maxCntPresent = maxA / x;
            if (need > maxCntPresent) continue;

            // 3) verificar todos múltiplos até maxA (esses são os que podem estar no array)
            for (long long m = x; m <= maxA; m += x) {
                if (!have.count(m)) { bad = true; break; }
            }
            if (bad) continue;

            // passou -> x pode ser parte de B
            ans.push_back(x);
            // ans permanece ordenado porque iteramos 'a' em ordem crescente
        }

        // --- NOVO: verificar cobertura de todos os a[i] pela ans ---
        bool all_covered = true;
        for (long long x : a) {
            bool covered = false;
            for (long long d : ans) {
                if (x % d == 0) { covered = true; break; }
                if (d > x) break; // ans está ordenado, otimização
            }
            if (!covered) { all_covered = false; break; }
        }

        if (!all_covered || ans.empty()) {
            cout << -1 << '\n';
        } else {
            cout << ans.size() << '\n';
            for (size_t i = 0; i < ans.size(); ++i) {
                if (i) cout << ' ';
                cout << ans[i];
            }
            cout << '\n';
        }
    }
    return 0;
}
