#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    while (n--){
        string s;
        cin >> s;
        int res = 0;
        bool continua = false;
        for(int i = 1;i < s.size()-1; i++){
            if(s[i] == '(') res++;
            else res--;
            if(res<0){
                cout << "YES\n";
                continua = true;
                break;
            }
        }

        if (continua) continue;

        cout << ((res == 0) ? "NO"  : "YES" )<< '\n';
    }

    return 0;
}