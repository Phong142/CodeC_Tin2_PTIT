#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, m, l, r;
        cin >> n >> m;
        int a[n+5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        while(m--){
            long long sum=0;
            cin >> l >> r;
            for(int i=l-1; i<r; i++) {
                sum+=a[i];
            }
            cout << sum << endl;
        }
        cout << endl;
    }
    return 0;
}