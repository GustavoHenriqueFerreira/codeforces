#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int mx=0;

        for(int i=0;i<n;i++) {
            mx=max(mx,a[i]);
            if (i%2) a[i]=mx;
        }
        
        long long ans=max(0,a[0]-a[1]+1);
        
        for(int i=2;i<n;i+=2) {
            int x=max(0,a[i]-a[i-1]+1);
            if (i<n-1) x=max(x,a[i]-a[i+1]+1);
            ans+=x;
        }
        cout<<ans<<endl;
    }

    return 0;
}