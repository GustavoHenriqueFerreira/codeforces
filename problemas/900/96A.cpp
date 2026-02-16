#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;

    bool continua = true;
    int cont = 1;
    for (int i = 1; i < s.size() && continua; i++){
        if (s[i] == s[i-1])
            // cout << s[i] << '\n';
            cont++;
            // cout << cont << endl;
            if (cont == 7) {
                continua = false;
                cout << "YES" << '\n';
                break;
            }
        else if (s[i] != s[i-1])
            cont = 1;
    }

    if (continua) 
        cout << "NO" << '\n';

    return 0;
}