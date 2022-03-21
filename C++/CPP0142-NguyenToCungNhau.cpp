#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int nt(int n){
    if(n < 2) return 0;
    for(int i = 2;i <= sqrt(n);i++) if(n%i==0) return 0;
    return 1;
}

int main(){
    faster;
    int test;
    cin >> test;
    while(test--){
        int x, t = 0;
        cin >> x;
        for(int i = 1; i <= x;i++){
            if((__gcd(x,i)) == 1) t++;
        }
        if(nt(t)) cout << 1 << endl;
        else cout << 0 << endl;
    }
}