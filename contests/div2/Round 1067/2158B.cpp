#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;

    while (t--){
        long long n; cin >> n;
        vector<long long> vec (2*n);
        vector<long long> pares, impares;

        unordered_map<long long,long long> freq;
        for (long long i = 0; i < 2 * n; i++) { cin >> vec[i];freq[vec[i]]++;}

        long long quant_pares = 0, soma_impares = 0;
        for (auto num : freq) {
            quant_pares += num.second/2;
            if (num.second % 2 == 0) 
                pares.push_back(num.second);
            else {
                impares.push_back(num.second);
                soma_impares += num.second; 
            }
        }

        long long res = 0;
        long long limite = min((long long)pares.size(), n);
        for (long long i = limite; i >= 0; i--) {
            if (quant_pares - i < 0) 
                continue;
            long long falta = n - i;

            long long inicio = max(0LL, (long long)(falta - (2 * quant_pares - i)));
            long long fim = min(soma_impares, falta);
            if (inicio > fim) 
                continue;

            if (inicio % 2 == falta % 2 || inicio + 1 <= fim) { 
                res = i; 
                break; 
            }
        }

        res = impares.size() + 2LL * res;
        cout << res << "\n";
    }

    return 0;
}
