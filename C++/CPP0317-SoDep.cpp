#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

long long check(string s){
    int k = s.length();
    for(int i = 0; i < k;i++){
        if(s[i] != s[k-1-i] || (int)s[i] % 2 != 0) return 0;
    }
    return 1;
}

int main(){
    faster;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(check(s) == 1) cout << "YES" << endl;
        else cout << "NO" <<endl;
    }
}