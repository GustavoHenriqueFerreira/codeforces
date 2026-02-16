#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while (t--){
        long long a, b; int n; cin >> a >> b >> n;

        vector<int> vec (n);
        for (int i = 0; i < n; i++) cin >> vec[i];
        sort(vec.rbegin(), vec.rend());
        
        long long tempo = b;
        for (int i = 0; i < n; i++)
            tempo += min((long long)vec[i], (long long)a-1);

        cout << tempo << '\n';
    }

    return 0;
}