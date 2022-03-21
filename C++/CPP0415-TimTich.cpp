#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n, m;
        cin >> n >> m;
        long long A[n], B[m];
        for(long long i = 0; i < n;i++) cin >> A[i];
        for(long long i = 0; i < m;i++) cin >> B[i];
        sort(A, A+n);
        sort(B, B+m);
        long long tich = A[n-1]*B[0];
        cout << tich << endl;
    }
        cout << endl;
    return 0;
}