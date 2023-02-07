#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void xaunptruoc(string s){
    int i=s.size()-1;
    while(i>=0 && s[i]=='0'){
        s[i]='1';
        i--;
    }
    if(i>=0) s[i]='0';
    cout << s << endl;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin.ignore();
        cin >> s;
        xaunptruoc(s);
    }
    return 0;
}