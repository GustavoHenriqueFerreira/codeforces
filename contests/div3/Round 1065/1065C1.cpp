#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin>>t;
    while (t--){
        long long n; cin>> n;
 
        vector<long long> a (n);
        for (long long i = 0; i < n; i++)
            cin >> a[i];
 
        vector<long long> b (n);
        for (long long i = 0; i < n; i++)
            cin >> b[i];
 
        long long xorA = 0, xorB = 0;
        for (long long i = 0; i < n; ++i) {
            xorA ^= a[i];
            xorB ^= b[i];
        }
 
        if (xorA == xorB) {
            cout << "Tie" << '\n';
            continue;
        }
 
        long long ultimoDif = -1;
        for (long long i = 0; i < n; ++i) {
            if (a[i] != b[i]) 
                ultimoDif = i + 1;
        }
 
        if (ultimoDif == -1) {
            cout << "Tie\n";
            continue;
        }
 
        if (ultimoDif % 2 == 1) 
            cout << "Ajisai\n";
        else 
            cout << "Mai\n";
    }
 
    return 0;
}