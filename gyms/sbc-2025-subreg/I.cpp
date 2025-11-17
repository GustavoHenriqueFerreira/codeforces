#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    vector<long long> x(n), y(n);
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    vector<long long> dist(n-1);
    for (int i = 0; i < n-1; i++)
        dist[i] = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);

    long long L = 1, R = 1e18; // limite do R1
    long long C = 0;

    for (int i = 0; i < n-1; i++) {
        if (i % 2 == 0)
            L = max(L, 1 - C);
        else
            R = min(R, dist[i] - 1 - C);

        C = dist[i] - C;
    }

    if (L <= R)
        cout << R << '\n';
    else
        cout << -1 << '\n';
}