#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        string s; 
        cin >> s;

        int acordado = -1;
        int dormindo = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                acordado = i + k;
            else { 
                if (i > acordado)
                    dormindo++;
            }
        }

        cout << dormindo << '\n';
    }

    return 0;
}
