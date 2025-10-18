#include <bits/stdc++.h>
using namespace std;

long long min_swaps_to_block(const vector<int>& positions) {
    int n = positions.size();
    if (n == 0) return 0;

    // Encontre a mediana das posições
    int median = positions[n / 2];
    long long swaps = 0;
    
    // Calcule a distância de cada elemento até a posição ideal em bloco contínuo
    for (int i = 0; i < n; i++) {
        swaps += abs(positions[i] - (median - n / 2 + i));
    }
    return swaps;
}

int main() {
    long long tests;
    cin >> tests;

    while (tests--) {
        long long n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> posA, posB;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') posA.push_back(i);
            else posB.push_back(i);
        }

        long long resA = min_swaps_to_block(posA);
        long long resB = min_swaps_to_block(posB);

        cout << min(resA, resB) << endl;
    }

    return 0;
}
