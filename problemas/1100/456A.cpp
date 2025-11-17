#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> vetor (n);

    for (int i = 0; i < n; i++){
        cin >> vetor[i].first >> vetor[i].second;
    }

    sort(vetor.begin(), vetor.end());

    for (int i = 0; i < n - 1; i++) {
        if (vetor[i].second > vetor[i+1].second) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;

    return 0;
}