#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;
    vector<int> vetorP;
    vector<int> vetorM;
    vector<int> vetorPE;

    int p = 0;
    int m = 0;
    int pe = 0;

    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
    
        if (v == 1) {
            vetorP.push_back(i+1);
            p++;
        }
        if (v == 2) {
            vetorM.push_back(i+1);
            m++;
        }
        if (v == 3) {
            vetorPE.push_back(i+1);
            pe++;
        }
    }

    int result = p;

    if (result > m) {
        result = m;
    }
    if (result > pe) {
        result = pe;
    }
    
    cout << result << endl;
    if (result != 0) {
        for (int i = 0; i < result; i++) {
            cout << vetorP[i] << " " << vetorM[i] << " " << vetorPE[i] << endl;
        }
    }

    return 0;
}