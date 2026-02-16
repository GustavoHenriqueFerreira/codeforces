#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;

        vector<ll> q(n), r(n);
        for (long long i = 0; i < n; i++) cin >> q[i];
        for (long long i = 0; i < n; i++) cin >> r[i];

        sort(r.begin(), r.end());
        multiset<ll> S(q.begin(), q.end());

        long long res = 0;

        for (int i = 0; i < n; i++) {
            ll rv = r[i];

            if (rv >= k) continue;

            ll Qmax = (k - rv) / (rv + 1);
            if (Qmax <= 0) continue;

            auto it = S.upper_bound(Qmax);
            if (it == S.begin()) continue;

            it--;
            S.erase(it);
            res++;
        }

        cout << res << "\n";
    }
}
