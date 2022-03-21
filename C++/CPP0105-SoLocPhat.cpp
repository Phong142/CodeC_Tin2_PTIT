#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int lp(string s){
    int len=s.length();
    for(int i=0; i<len; i++){
        if(s[i]!='0' && s[i]!='6' && s[i]!='8'){
            return 0;
        }
    }
    return 1;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        if(lp(s))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}