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
        int a[n][k], b[n*k];
        int cnt=0;
        for (int i=0; i<k; i++){
            for (int j=0; j<n; j++) {
                cin >> a[i][j];
                b[cnt++] = a[i][j];
            }
        }
        sort(b, b+cnt);
        for (int i=0; i<cnt; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}