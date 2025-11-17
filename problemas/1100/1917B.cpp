#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;

    while (t--) {
        int n; cin>>n;
        string s;
        cin>>s;

        if(n == 1) {
            cout << 1 << endl;
            continue;
        }

        long long total = 0;
        set<char> visto;
        for (int i = 0; i < n; i++){
            visto.insert(s[i]);
            // cout << "visto: " << s[i] << endl;
            total += visto.size();
            // cout << total << endl; 
        }

        cout << total << endl;
    }

    return 0;
}