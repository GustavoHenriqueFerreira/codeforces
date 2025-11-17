#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    for (int i = 0; i < n.size(); i++) {
        int digito = n[i] - '0';

        if (9 - digito < digito && !(i == 0 && digito == 9))
            n[i] = '0' + 9 - digito; 
    }

    cout << n << endl;

    return 0;
}