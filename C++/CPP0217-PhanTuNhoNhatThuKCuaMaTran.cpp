#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        int a[n+5][n+5];
        int b[n*n+5];
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
                b[cnt++]=a[i][j];
            }
        }
        sort(b, b+cnt);
        for(int i=0; i<cnt; i++){
            if(i+1==k)
                cout << b[i];
        }
        cout << endl;
    }
    return 0;
}