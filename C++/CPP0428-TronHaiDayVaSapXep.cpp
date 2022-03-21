#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        int z = m + n;
        int c[z];
        for (int i = 0; i < z; i++) {
            if (i < n) c[i] = a[i];
            else c[i] = b[i - n];
        }
        sort(c, c + z);
        for (int i = 0; i < z; i++) {
            cout << c[i] << " ";
        }
        cout << endl;
        cout << endl;
    }
    return 0;
}