#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string inicio;
        for (int i = 0; i < s.size(); i = i + 2) {
            if (i == 0) {
                inicio.append(1, s[i]);
                inicio.append(1, s[i+1]);
            } 
            else {
                inicio.append(1, s[i + 1]);
            }
        }

        cout << inicio << endl;
    }

    return 0;
}