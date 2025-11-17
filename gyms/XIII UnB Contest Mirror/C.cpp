#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;

    vector<long long> musicas (n);
    long long soma = 0;
    for (int i = 0; i < n; i++) {
        cin >> musicas[i];
        if (k == 1)
            if (musicas[i] > 0)
                soma += musicas[i];
    }
        
    if (k >= n)
        soma = max(*max_element(musicas.begin(), musicas.end()), 0LL);

    if (k < n && k > 1) {
        vector<long long> dp(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            long long nao_pega = dp[i - 1];
            long long pega = musicas[i - 1];
            if (i - k >= 0)
                pega += dp[i - k];
            dp[i] = max(nao_pega, pega);
        }
        
        soma = dp[n];
    }

    cout << soma << endl;

    return 0;
}