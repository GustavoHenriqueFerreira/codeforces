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

        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++) pos[p[i]] = i;

        int segmentos = 1;
        for (int i = 2; i <= n; i++) {
            if (pos[i] < pos[i - 1])
                segmentos++;
        }

        if (segmentos == 1)
            cout << "Yes" << "\n";
        else 
            cout << "No" << "\n";
    }
}
