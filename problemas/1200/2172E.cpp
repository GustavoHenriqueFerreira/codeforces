#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--){
        string n; 
        int j, k;
        cin >> n >> j >> k;

        sort(n.begin(), n.end());
    
        vector<string> p;

        do p.push_back(n); 
        while(next_permutation(n.begin(), n.end()));

        string a = p[j-1], b = p[k-1];
        int A=0, B=0;

        vector<bool> usado(a.size(),0), usado2(a.size(),0);
        for(int i= 0; i < a.size(); i++) 
            if(a[i] == b[i]) {
                A++; 
                usado[i] = 1;
                usado2[i] = 1;
            }
        
        for(int i=0; i < a.size(); i++) 
            if(!usado[i]) 
                for(int j2 = 0; j2 < b.size(); j2++) 
                    if(!usado2[j2] && a[i] == b[j2]) {
                        B++; 
                        usado2[j2]=1; 
                        break;
                    }

        cout << A << "A" << B << "B\n";
    }

    return 0;
}