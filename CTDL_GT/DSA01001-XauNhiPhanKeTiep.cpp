#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void npketiep(){
    string s;
    cin >> s;
    int i=s.size()-1;
    while(i>=0 && s[i]=='1'){
        s[i]='0';
        i--;
    }
    if(i>=0){
        s[i]='1';
        cout << s << endl;
    }
    else{
        for(int j=0; j<s.size(); j++)
            cout << 0;
        cout << endl;
    }
}


int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        npketiep();
    }
    return 0;
}