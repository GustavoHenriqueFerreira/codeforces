#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = to_string(n+1);
    set<char> digitos_unicos(s.begin(), s.end());
    
    while (digitos_unicos.size() < s.size()) {
        n++;
        s = to_string(n);
        digitos_unicos = set<char>(s.begin(), s.end());
    }

    cout << s << endl;

    return 0;
}