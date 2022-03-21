#include <bits/stdc++.h>

using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int cnt = 0;
    while (n % 2 == 0) {
        cnt++;
        n /= 2;
    }
    if (cnt != 0)
        cout << 2 << " " << cnt << endl;
    for (int i = 3; i <= sqrt(n); i += 2) {
        cnt = 0;
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        if (cnt > 0)
            cout << i << " " << cnt << endl;
    }
    if (n > 2) {
        cout << n << " " << 1 << endl;
        return 0;
    }
}