#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> nomes;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (nomes.find(s) == nomes.end()) {
            nomes[s] = 1;
            cout << "OK" << endl;
        } else {
            string novoNome = s + to_string(nomes[s]);
            nomes[s]++; 
            nomes[novoNome] = 1;
            cout << novoNome << endl;
        }
        // TLE
        // if (find(strings.begin(), strings.end(), s) == strings.end()) {
        //     strings.push_back(s);
        //     cout << "OK" << endl;
        // } else {
        //     string novaString = s;
        //     novaString.append(1, '1');
            
        //     for (int j = 2; find(strings.begin(), strings.end(), novaString) != strings.end(); j++) {
        //         novaString[novaString.size() - 1] = j + '0';
        //     }

        //     strings.push_back(novaString);

        //     cout << novaString << endl;
        // }
    }

    return 0;
}