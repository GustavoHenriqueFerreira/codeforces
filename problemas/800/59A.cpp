#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cin >> s;
    bool lower = true;
    int quantLower = 0, quantUpper = 0;

    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i]))
            quantUpper++;
        if (islower(s[i])) 
            quantLower++; 
    }

    if (quantUpper > quantLower)
        lower = false;

    for (int i = 0; i < s.size(); i++) {
        if (lower)
            s[i] = tolower(s[i]);
        else 
            s[i] = toupper(s[i]);
    }    

    cout << s << endl;
}