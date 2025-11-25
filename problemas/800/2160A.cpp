#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> cnt(102, 0);

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (0 <= x && x <= 100) 
                cnt[x]++;
        }

        int mex = 0;
        while (mex <= 101 && cnt[mex] > 0) 
            mex++;
        
        cout << mex << '\n';
    }

    return 0;
}
