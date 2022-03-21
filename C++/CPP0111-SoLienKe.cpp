#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        int check = 0;
        for(int i = 0; i < s.size()-1;i++){
            if(abs(s[i]-'0'-s[i+1]+'0') != 1) check = 1;
        }
        if(check ==0 ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}