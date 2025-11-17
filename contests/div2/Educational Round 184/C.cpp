#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n + 1);
        vector<long long> prefix(n + 1, 0);
        
        long long soma = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            soma += a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }
        
        vector<long long> valores(n + 2);
        for (int r = 1; r <= n; r++) {
            valores[r] = 1LL * r * r + r - prefix[r];
        }
        
        vector<long long> sufMaximo(n + 2);
        sufMaximo[n + 1] = -1e18;
        for (int r = n; r >= 1; r--) {
            sufMaximo[r] = max(valores[r], sufMaximo[r + 1]);
        }
        
        long long maxGanho = 0;
        for (int l = 1; l <= n; l++) {
            long long ganho = sufMaximo[l] + (-1LL * l * l + l + prefix[l - 1]);
            maxGanho = max(maxGanho, ganho);
        }
        
        cout << soma + maxGanho << "\n";
    }
    
    return 0;
}