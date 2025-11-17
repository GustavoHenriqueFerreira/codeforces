#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1, 0);
        for (int i = 1; i <= n;++i)
            cin >> a[i];
        
        string s;
        cin >> s;
        s = " " + s;
        
        if(s[1]=='1'||s[n]=='1'){
            cout << -1 << endl;
            continue;
        }
        
        int mx = max_element(a.begin() + 1, a.end()) - a.begin();
        int mi = min_element(a.begin() + 1, a.end()) - a.begin();
        if(s[mx]== '1'|| s[mi]=='1'){
            cout << -1 << endl;
            continue;
        }
        
        cout << 5 << endl;
        cout << 1 << " " << mx << endl;
        cout << 1 << " " << mi << endl;
        cout << mx << " " << n << endl;
        cout << mi << " " << n << endl;
        cout << min(mi,mx) << " " << max(mi,mx) << endl;
    }
    
    return 0;
}