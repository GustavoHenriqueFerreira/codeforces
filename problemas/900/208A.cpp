#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;


    for (int i = 0; i < s.size(); i++) {
        if (i+2 < s.size() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            s[i] = ' ';
            s[i+1] = ' ';
            s[i+2] = ' ';
            i += 2;
        }
    }

    stringstream ss(s);
    string palavra;
    vector<string> palavras;
    while (ss >> palavra)
        palavras.push_back(palavra);

    for (int i = 0; i < palavras.size(); i++) {
        if (i > 0) 
            cout << " ";
        cout << palavras[i];
    }

    cout << '\n';
    return 0;
}