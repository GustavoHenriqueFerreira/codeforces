#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;

    while (t--){
        long long n, k; cin >> n;
        vector<long long> a (n);
        vector<long long> b (n);
        
        for (long long i = 0; i < n; i++) 
            cin >> a[i];
        
        for (long long i = 0; i < n; i++) 
            cin >> b[i];

        long long alice = (k + 1) / 2;
        long long bob = k / 2;

        

        cout << res << '\n';
    }

    return 0;
}
