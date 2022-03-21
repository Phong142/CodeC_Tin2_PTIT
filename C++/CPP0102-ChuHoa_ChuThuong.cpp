#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string s, x;
        cin >> s;
        int i=0;
        if(s[i]>='A' && s[i]<='Z') 
            x[i]=s[i]+32;
        else if(s[i]>='a' && s[i]<='z')
            x[i]=s[i]-32;
        else
            x[i]=s[i];
        cout << x[i];
        cout << endl;
    }
    return 0;
}