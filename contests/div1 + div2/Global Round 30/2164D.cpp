#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin >> n>>k;
        string s;
        cin >> s;
        string t;
        cin >> t;
        ll i = n - 1;
        ll mx = 0;
        bool pos = true;
        for (ll j = n - 1; i >= 0;i--){
            if(j>i){
                j = i;
            }
            while(j>=0&&s[j]!=t[i]){
                j--;
            }
            if(j>=0){
                mx = max(mx, i - j);
            }
            else{
                pos = false;
                break;
            }
        }
        if(pos==false||mx>k){
            cout << -1 << endl;
            continue;
        }
        cout << mx << endl;
        while(s!=t){
            i = n - 1; 
            for (ll j = n - 1; j >= 0&&i>=0;i--){ 
                if(j>i){ 
                    j = i; 
                } 
                while(j>=0&&s[j]!=t[i]){ 
                    j--; 
                } 
                if(i>j){ 
                    s[j + 1] = s[j]; 
                } 
            } 
            cout << s << endl; 
        }
    }
    return 0;
}