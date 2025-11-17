#include <bits/stdc++.h>
using namespace std;

bool existeCaminho(int l, int r, vector<int>& a, vector<int>& b, int n) {
    if (a[0] < l || a[0] > r || b[n-1] < l || b[n-1] > r) {
        return false;
    }

    for (int k = 0; k < n; k++) {
        bool valido = true;
   
        for (int i = 0; i <= k; i++) {
            if (a[i] < l || a[i] > r) {
                valido = false;
                break;
            }
        }
        if (!valido) continue;
        
        for (int i = k; i < n; i++) {
            if (b[i] < l || b[i] > r) {
                valido = false;
                break;
            }
        }
        if (valido) return true;
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        long long total = 0;
        
        for (int l = 1; l <= 2*n; l++) {
            for (int r = l; r <= 2*n; r++) {
                if (existeCaminho(l, r, a, b, n)) {
                    total++;
                }
            }
        }
        
        cout << total << endl;
    }
    
    return 0;
}