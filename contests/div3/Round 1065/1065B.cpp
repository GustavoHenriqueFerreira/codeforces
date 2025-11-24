#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while (t--){
        long long n; cin>> n;

        vector<long long> vec (n);
        for (long long i = 0; i < n; i++)
            cin >> vec[i];

        long long minAbs = 0;
        if (vec[0] != -1 && vec[n-1] != -1) {
            minAbs = llabs(vec[n-1] - vec[0]);

            for (int i = 0; i < n; ++i)
                if (vec[i] == -1) vec[i] = 0;
        } else {
            minAbs = 0;
            long long teste;
            if (vec[0] != -1) teste = vec[0];  
            else if (vec[n-1] != -1) teste = vec[n-1];
            else teste = 0;           

            vec[0] = teste;
            vec[n-1] = teste;
            for (int i = 0; i < n; ++i)
                if (vec[i] == -1) vec[i] = 0;
        }

        cout << minAbs << '\n';
        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << vec[i];
        }
        cout << '\n';
    }

    return 0;
}