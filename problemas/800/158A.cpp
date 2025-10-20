#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, k;

    cin >> t;
    cin >> k;
    int x = 0;
    vector<int> vetor(t);

    for (int i = 0; i < t; i++) {
        cin >> vetor[i];
    }    

    sort(vetor.rbegin(), vetor.rend());

    for (int i = 0; i < t; i++) {
        if (vetor[i] >= vetor[k-1] && vetor[i] != 0) {
            x++;
        }
    } 

    cout << x << endl;

    return 0;
}