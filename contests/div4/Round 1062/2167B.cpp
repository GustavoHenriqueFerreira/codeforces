#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int q;
        cin >> q;

        string s, t;
        cin >> s >> t;

        // fiz do jeito mais dificil :)
        // bool v = true;
        // for (int i = 0; i < s.size(); i++) {
        //     if (v == false) 
        //         break;
        //     for (int j = 0; j < t.size(); j++) {
        //         if (s[i] == t[j]) {
        //             t.erase(j, 1); 
        //             break;
        //         }

        //         if (s[i] != t[j] && j == t.size() - 1) {
        //             v = false;
        //             break; 
        //         }    
        //     }
        // }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}