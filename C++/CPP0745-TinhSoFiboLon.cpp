#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n, r = 1e9+7;
        cin >> n;
        long long a[1001];
        a[0] = 0, a[1]= 1;
        for(long long i = 2; i <= n;i++){
            a[i] = (a[i-1]+a[i-2])%r;
        }
        cout << a[n] << endl;
        cout << endl;
    }
    return 0;
}