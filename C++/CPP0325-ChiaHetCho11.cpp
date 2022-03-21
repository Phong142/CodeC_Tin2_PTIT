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
        long long sl = 0, sc = 0;
        for(long long i = 0; i < s.length();i++){
            if(i % 2 == 0) sc += s[i]-'0';
            else sl += s[i]-'0';
        }
        long long kq = abs(sc-sl);
        if(kq % 11 == 0) cout << 1 << endl;
        else cout << 0 << endl;
        cout << endl;
    }
    return 0;
}