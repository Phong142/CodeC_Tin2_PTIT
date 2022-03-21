#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k, dem = 0, check = 0;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n;i++) cin >> a[i];
        for(int i = 0; i < n;i++){
            if(a[i] == k) {
                dem++;
                check = 1;
            }
        }
        if(check == 1) cout << dem << endl;
        else cout << -1 << endl;
        cout << endl;
    }
    return 0;
}