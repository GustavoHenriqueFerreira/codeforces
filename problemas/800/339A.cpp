#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> nums;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') {
            nums.push_back(s[i]);
        }
    }

    sort(nums.begin(), nums.end());

    int pos = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') {
            s[i] = nums[pos];
            pos++;
        }
    }

    cout << s << endl;

    return 0;
}