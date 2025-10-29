#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h;

    cin >> n >> h;

    vector<int> vetor (n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];

        if (vetor[i] <= h)
            ans++;
        else
            ans += 2;
    }

    cout << ans << endl;

    return 0;
}