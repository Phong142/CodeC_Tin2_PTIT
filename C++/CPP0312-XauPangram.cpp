#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    cin.ignore();
    while (test--) {
        string s;
        int k, dem = 0;
        cin >> s >> k;
        int h = s.size(), b[100000] = {0};
        for(int i = 0; i < h;i++) b[s[i]]++;
        for(int i = 0; i < h;i++){
            if(b[s[i]] != 0){
                dem++; 
                b[s[i]] = 0;
            }
        }
        int c = 26-dem;
        if(c > k) cout << 0 << endl;
        else cout << 1 << endl;
        cout << endl;
    }
    return 0;
}