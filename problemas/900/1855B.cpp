#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        long long n; cin >> n;

        long long res = 0;
        for(long long i = 1; i < n+1; i++){
            if(n % i == 0) 
                res++;
            else 
                break;
        }

        cout << res << '\n';
    }
    return 0;
}
