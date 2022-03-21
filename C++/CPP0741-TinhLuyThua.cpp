#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long a, b;
        long long c;
        cin >> a >> b >> c;
        long i = 1;
        for (int j = 0; j < b; j++) {
            i = (i * a) % c;
        }
        cout << i << endl;
        cout << endl;
    }
    return 0;
}