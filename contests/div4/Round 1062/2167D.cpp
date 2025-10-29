#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a = a % b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> vetor(n);

        for (int i = 0; i < n; i++) {
            cin >> vetor[i];
        }

        long long g = vetor[0];
        for (int i = 1; i < n; i++) {
            g = gcd(g, vetor[i]);
        }

        long long ans = -1;
        for (long long x = 2; x <= 100; x++) {
            if (gcd(x, g) == 1) {
                ans = x;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
