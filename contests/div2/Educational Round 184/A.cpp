#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, a;
        cin >> n >> a;

        vector<long long> vetor (n);
        for (int i = 0; i < n; i++) {
            cin >> vetor[i];
        }

        long long esq = 0, dir = 0;

        for (long long x : vetor) {
            if (x < a) esq++;
            else if (x > a) dir++;
        }

        if (dir > esq)
            cout << a + 1 << "\n";
        else
            cout << a - 1 << "\n";
    }
    return 0;
}
