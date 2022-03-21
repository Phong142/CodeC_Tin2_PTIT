#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int nto(int n){
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int l,r;
        cin >> l >> r;
        int count=0;
        for(int i=l; i<=r; i++){
            if(nto(i))
                count++;
        }
        cout << count;
        cout << endl;
    }
    return 0;
}