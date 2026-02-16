#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--){
        long long k, n;
        cin >> n >> k;

        string s; cin >> s;
        bool palin = false;

        vector<long long> freq (26);

        for (long long i = 0; i < s.size(); i++)
            freq[s[i] - 'a']++;

        long long impares = 0;
        for (long long i = 0; i < freq.size(); i++){
            if (freq[i] % 2 == 1)
                impares++;
        }

        if (impares > k+1)
            palin = false;
        else 
            palin = true;
        
        if (palin)
            cout << "YES" << '\n';
        else 
            cout << "NO" << '\n';
    }

    return 0;
}