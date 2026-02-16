#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        set<int> a;
        for (int i = 0; i < n; i++) {int x; cin >> x; a.insert(x);}

        int dis = a.size();
        while(!a.count(dis)) {
            a.insert(dis);
            dis++;
        }
        
        cout << dis << '\n';
    }

    return 0;
}
