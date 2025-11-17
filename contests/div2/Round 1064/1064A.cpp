#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        map<char, int> freq;
        // vector<int> vetor(n);
        // for (int i = 0; i < n; i++) {
        //     cin >> vetor[i];

        //     // cout << "YES" << endl;
        //     // cout << "NO" << endl;
        // }
        for (char c: s)
            freq[c]++;

        int freqUltima = freq[s[s.size() - 1]];
        cout << s.size() - freqUltima << endl;
    }

    return 0;
}