#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, s, m;
        cin >> n >> s >> m;
        if(m*s > (s-s/7)*n) cout << -1;
        else{
            for(int i=1; i<=s-s/7; i++){
                if(n*i>=s*m){
                    cout << i;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}