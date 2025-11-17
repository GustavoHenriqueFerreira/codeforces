#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> A (n);
        vector<int> B (n);
        for (int i = 0; i < n; i++)     
            cin >> A[i]; 
        for (int i = 0; i < n; i++) 
            cin >> B[i];
        
        sort(A.begin(), A.end());
        sort(B.rbegin(), B.rend());

        for (int i = 0; i < n && k > 0; i++) {
            if (A[i] < B[i]) {
                swap(A[i], B[i]);
                k--;
            }
        }

        cout << accumulate(A.begin(), A.end(), 0) << endl;
    }

    return 0;
}