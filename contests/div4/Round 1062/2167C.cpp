#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> vetor (n);
        bool impar = false;
        bool par = false;

        for (long long i = 0; i < n; i++) {
            cin >> vetor[i];

            if (vetor[i] % 2 == 0)
                par = true;
            if (vetor[i] % 2 == 1)
                impar = true;  
        }

        if (par && impar) {
            sort(vetor.begin(), vetor.end());
        }

        for (long long i = 0; i < n; i++) {
            cout << vetor[i] << " ";
        }
        cout << endl;
    }
    return 0;
}