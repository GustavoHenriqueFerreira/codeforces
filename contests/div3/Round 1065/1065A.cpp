#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while (t--){
        int n; cin>> n;

        if (n % 2 == 1) {
            cout << 0 << "\n";
            continue;
        }

        if (n == 2) {
            cout << 1 << "\n";
            continue;
        }

        int ops = 0;

        for (int w = 0; w <= n / 4; ++w) {
            int pernas = n - 4 * w;

            if (pernas % 2 == 0)
                ops++;
        }
        
        cout << ops << "\n";
    }

    return 0;
}