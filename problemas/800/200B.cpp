#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vetor (n);

    // 50% + 50% + 100% = percentual de suco
    // total = 300%
    // porcentagem de suco = 200 / 300
    int suco = 0;
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
        total = total + 100;
        suco = suco + vetor[i];
    }

    double res = (double)suco / (double)total * 100;

    cout << fixed << setprecision(13) << res << endl;

    return 0;
}