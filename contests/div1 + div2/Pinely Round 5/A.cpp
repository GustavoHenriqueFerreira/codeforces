#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long rating, limite, delta, n;
        long long rounds = 0;
        string s;
        cin >> rating >> limite >> delta >> n >> s;
        
        for (long long i = 0; i < n; i++) {
            if (rating < limite) {
                rounds++;
                continue;
            }

            if (rating >= limite && s[i] == '1') {
                rounds++;
                rating -= delta;
                continue;
            }

            if (rating == 0) {
                rating++;
                continue;
            }
        }

        cout << rounds << endl;
    }

    return 0;
}