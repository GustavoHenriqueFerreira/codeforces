#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec(n);
    long long total = 0;
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        total += vec[i];
    }

    sort(vec.rbegin(), vec.rend());

    long long somaRes = 0;
    int quantMoeda = 0;

    for (int i = 0; i < n; ++i) {
        somaRes += vec[i];
        quantMoeda++;
        if (somaRes > total - somaRes) break;
    }

    cout << quantMoeda << '\n';
    return 0;
}
