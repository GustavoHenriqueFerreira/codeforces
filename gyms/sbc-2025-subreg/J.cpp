#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int n; cin>>n;

    // while (n--) {
    //     cout << "aa" << "\n";
    // }
    vector<int> vetor (10);
    for (int i = 0; i < 10; i++)
        cin >> vetor[i];

    int falta = 0;
    int quant1 = count(vetor.begin(), vetor.end(), 1);
    int quant2 = count(vetor.begin(), vetor.end(), 2);
    int quant3 = count(vetor.begin(), vetor.end(), 3);
    int quant4 = count(vetor.begin(), vetor.end(), 4);

    if (quant1 == 0)
        falta++;
    if (quant2 == 0)
        falta++;
    if (quant3 == 0)
        falta++;
    if (quant4 == 0)
        falta++;

    cout << falta << endl;

    return 0;
}