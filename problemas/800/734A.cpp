#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n >> s;

    int d = 0;
    int a = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'D')
            d++;
        else 
            a++;
    }

    if (d == a)
        cout << "Friendship" << endl;
    if (d > a)
        cout << "Danik" << endl;
    if (d < a) 
        cout << "Anton" << endl;

    return 0;
}