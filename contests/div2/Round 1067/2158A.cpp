#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;

    while (t--){
        int n, y, r;
        cin >> n >> y >> r;

        int total = r;
        total += y/2;

        if (total > n)
            total = n;
        cout << total << '\n';
    }
    
    return 0;
}