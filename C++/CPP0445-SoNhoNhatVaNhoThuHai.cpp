#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[n];
        for (int & x: a) cin >> x;
        sort(a, a + n);
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
            if (a[i] != a[i + 1]) cnt++;
        if (cnt == 0) cout << "-1";
        else cout << a[0] << " " << a[1];
        cout << endl;
    }
    return 0;
}