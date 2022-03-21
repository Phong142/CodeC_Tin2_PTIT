#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n, k;
        cin >> n >> k;
        long long A[n+1];
        for(long long i = 1; i <= n;i++) cin >> A[i];
        for(long long i = 1; i <= n;i++)
            if(A[i] == k) cout << i << endl;
        cout << endl;
    }
    return 0;
}