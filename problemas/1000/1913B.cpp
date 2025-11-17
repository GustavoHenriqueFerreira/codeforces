#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string s; cin >> s; 
        int n = s.size();
        int zeros = count(s.begin(), s.end(), '0');
        int total1 = n - zeros;
        
        vector<int> prefix(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            prefix[i] = prefix[i - 1] + (s[i - 1] == '0');
        }
        
        int max_k = 0;
        for (int k = 0; k <= n; ++k) {
            int cont0 = prefix[k];
            int cont1 = k - cont0; 
            if (cont0 <= total1 && cont1 <= zeros) {
                max_k = k;
            }
        }
        
        cout << n - max_k << '\n';
    }
    
    return 0;
}