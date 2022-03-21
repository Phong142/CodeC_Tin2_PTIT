#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int chia(int a, int m){
    for(int i=1; i<=m; i++){
        if((a*i)%m==1) return i;
    }
    return -1;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int a, m;
        cin >> a >> m;
        cout << chia(a,m) << endl;
    }
    return 0;
}