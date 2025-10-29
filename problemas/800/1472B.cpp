#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    for (long long i = 0; i < t; i++) {
        long long n;
        cin >> n;

        vector<long long> vetor1; 
        vector<long long> vetor2; 
        long long somaTotal1 = 0;
        long long somaTotal2 = 0;
        for (long long j = 0; j < n; j++) {
            long long v;
            cin >> v;
            if (v == 2) {
                vetor2.push_back(v);
                somaTotal2 = somaTotal2 + v;
            }
            else {
                vetor1.push_back(v);
                somaTotal1 = somaTotal1 + v;
            }
        }

        int somaTotal = somaTotal1 + somaTotal2;

        if (somaTotal % 2 != 0) {
            cout << "NO" << endl;
        } else {
            if ((somaTotal / 2) % 2 != 0 && vetor1.size() == 0)
                cout << "NO" << endl;
            else    
                cout << "YES" << endl;
        }
    }

    return 0;
}