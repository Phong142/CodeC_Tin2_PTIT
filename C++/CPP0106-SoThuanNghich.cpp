#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int TN(string s){
    int len=s.size();
    for(int i=0; i<len/2; i++){
        if(s[i]!=s[len-i-1]) return 0;
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
        if(TN(s)==1) 
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}