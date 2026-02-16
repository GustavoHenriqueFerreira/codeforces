#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> vec (n);
        vector<int> freq (n+1, 0);
        for (int i = 0; i < n; i++) {cin >> vec[i]; freq[vec[i]]++;}

        int res = 0;
        for (int i = 0; i < n+1; i++){
            if (freq[i] > i)
                res += freq[i] - i;
            else if (freq[i] < i)
                res += freq[i];
        }

        cout << res << '\n';    
    }

    return 0;
}