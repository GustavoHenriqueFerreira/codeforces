#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int Q;
    cin >> Q;
    vector<int> query(Q);
    for (int i = 0; i < Q; i++) cin >> query[i];

    vector<long long> ans(Q, 0);
    unordered_map<int, int> cnt;

    // k é o TERCEIRO índice
    for (int k = 2; k < N; k++) {

        // usa pares (k, l) como "segundo número"
        for (int l = k + 1; l < N; l++) {
            int s2 = A[k] + A[l];
            for (int qi = 0; qi < Q; qi++) {
                int need = query[qi] - s2;
                if (cnt.count(need))
                    ans[qi] += cnt[need];
            }
        }

        // adiciona pares (i, j) com j = k-1
        for (int i = 0; i < k - 1; i++) {
            cnt[A[i] + A[k - 1]]++;
        }
    }

    for (long long x : ans)
        cout << x << '\n';
}
