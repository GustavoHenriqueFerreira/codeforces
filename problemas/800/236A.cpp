#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cin >> s;

    set<char> word;

    // inserir todas letras no set por ele só pega elas uma vez
    for (int i = 0; i < s.size(); i++){
        word.insert(s[i]);
    }

    string fim = "CHAT WITH HER!";

    if (word.size() % 2 == 1)
        fim = "IGNORE HIM!";

    cout << fim << endl;
    
    return 0;
}