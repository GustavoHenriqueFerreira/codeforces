#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        long long a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        vector<pair<long long,long long>> movs = {
            {a,b}, {a,-b}, {-a,b}, {-a,-b},
            {b,a}, {b,-a}, {-b,a}, {-b,-a}
        };

        set<pair<long long,long long>> atkK, atkQ;

        for(auto m : movs)
            atkK.insert({xk + m.first, yk + m.second});

        for(auto m : movs)
            atkQ.insert({xq + m.first, yq + m.second});

        int res = 0;
        for(auto pos : atkK)
            if(atkQ.count(pos)) res++;

        cout << res << "\n";
    }
}
