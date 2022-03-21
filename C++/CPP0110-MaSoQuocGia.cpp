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
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0' && s[i+1]=='8' && s[i+2]=='4'){
                s.erase(i, 3);
            }
        }
        cout << s;
        cout << endl;
    }
    return 0;
}