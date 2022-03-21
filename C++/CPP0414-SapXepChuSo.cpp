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
        for (int &x: a) cin >> x;
        set < int > s;
        for (int i = 0; i < n; i++) {
            int u = a[i];
            while (u>0) {
                int x = u % 10;
                s.insert(x);
                u /= 10;
            }
        }
        for (int x: s) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}