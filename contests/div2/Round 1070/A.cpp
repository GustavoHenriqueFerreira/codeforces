#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> vec (n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        int maior = 0, res = 0;
        for (int i = 0; i < n; i++) {
            maior = max(maior, vec[i]);
            if (maior > vec[i]) 
                res++;
        }

        cout << res << '\n';
    }

    return 0;
}