#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;

    while (t--){
        long long n; cin >> n;
        vector<long long> a (n);
        vector<long long> b (n);
        for (long long i = 0; i < n; i++) { cin >> a[i];}
        for (long long i = 0; i < n; i++) { cin >> b[i];}
        
        long long L = 0, R = 0;

        for (int i = 0; i < n; ++i) {
            long long novoL = min(L - a[i], b[i] - R);
            long long novoR = max(R - a[i], b[i] - L);
            L = novoL;
            R = novoR;
        }

        cout << R << '\n';
    }

    return 0;
}
