#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while (t--){
        long long n, k, x; cin >> n >> k >> x;

        long long menor = k * (k+1) / 2;
        // maior = total - soma de n-k
        long long maior = (n * (n+1) / 2) - ((n-k) * (n-k+1) / 2);

        if (x >= menor && x <= maior)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}