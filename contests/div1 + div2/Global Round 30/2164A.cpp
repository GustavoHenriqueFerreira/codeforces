#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long n, x;
        cin >> n;
        
        // cout << value << endl;
        vector<long long> vetor (n);
        for (long long i = 0; i < n; i++) {
            cin >> vetor[i];
        }

        cin >> x;

        long long min_val = *min_element(vetor.begin(), vetor.end());
        long long max_val = *max_element(vetor.begin(), vetor.end());
        // cout << min_val << endl;
        // cout << max_val << endl;
        if (min_val <= x && x <= max_val)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
        // cout << vetor[0] << endl;
    }

    return 0;
}