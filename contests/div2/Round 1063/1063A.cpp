#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> vetor(n);
        for (int i = 0; i < n; i++) {
            cin >> vetor[i];

            // cout << "YES" << endl;
            // cout << "NO" << endl;
        }

        int metade = n/2;
        sort(vetor.begin(), vetor.end());

        bool v = true;
        for (int i = 0; i < n - 1 && v; i++) {
            // cout << menores[i] << endl;
            //             cout << maiores[i] << endl;
            // if (i % 2 == 0) {
            //     vetor[i] = maiores[maior];
            //     maior++;
            // }
            // else {
            //     vetor[i] = menores[menor];
            //     menor++;
            // }
            if (vetor[i] != vetor[i+1] && i % 2 == 1)
                v = false;

            // cout << vetor[i] << endl;
        }

        if (v)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

    return 0;
}