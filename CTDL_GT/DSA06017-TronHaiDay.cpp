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
        int a[n+m+5];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=n; i<m+n; i++)
            cin >> a[i];
        sort(a, a+n+m);
        for(int i=0; i<n+m; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}