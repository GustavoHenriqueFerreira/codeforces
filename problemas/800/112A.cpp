#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    int res = 0;

    for (int i = 0; i < a.size(); i++){
        if (toupper(a[i]) > toupper(b[i])) {
            res++;
            break;
        }
        if (toupper(a[i]) < toupper(b[i])) {
            res--;
            break;
        }
    }

    // isso faz a mesma coisa, deixa todas em minusculo e ve a primeira letra diferente - retorna 0 ou 1 ou -1
    // strlwr(s1);
    // strlwr(s2);
    // int c=strcmp(s1,s2);

    cout << res << endl;

    return 0;
}