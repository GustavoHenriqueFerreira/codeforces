#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q;

    cin >> q;

    vector<vector<int>> vetor (100);
    while (q--) {
        int t;
        cin>>t;

        if (t == 2) {
            int i, x;
            cin >> i >> x;
            vetor[i-1].push_back(x);
        }

        if (t == 3) {
            int i, j;
            cin >> i >> j;
            cout << vetor[i-1][j-1] << endl;
        }
    }

    return 0;
}