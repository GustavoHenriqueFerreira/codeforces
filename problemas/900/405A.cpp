#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    for (int i = 0; i < n; ++i)
        cout << vec[i] << ' ';

    cout << '\n';

    return 0;
}