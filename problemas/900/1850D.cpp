#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        long long n, k; cin >> n >> k;

        vector<int> a (n);

        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int res = 1;
        int l = 0;

        for (int r = 1; r < n; r++) {
            if (a[r] - a[r - 1] > k)
                l = r;
            
            res = max(res, r - l + 1);
        }

        cout << (n - res) << "\n";
    }
    return 0;
}
