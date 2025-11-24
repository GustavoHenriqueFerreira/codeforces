#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; long long l;
    cin >> n >> l;

    vector<long long> v (n);
    for (long long i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    double maxDif = 0;
    for (long long i = 0; i < n - 1; i++) {
        double diff = (double)(v[i+1] - v[i]) / 2.0;
        if (diff > maxDif)
            maxDif = diff;
    }

    double distInicio = (double) v[0];
    double distFim = (double) (l - v[n-1]);
    maxDif = max(maxDif, max(distInicio, distFim));

    cout << fixed << setprecision(10) << maxDif << endl;

    return 0;
}