#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int primeiro, segundo, terceiro, quarto;

        cin >> primeiro >> segundo >> terceiro >> quarto;

        if (primeiro == segundo && primeiro == terceiro && primeiro == quarto) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}