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
        long long A[n];
        for(int i = 0; i < n;i++) cin >> A[i];
        sort(A, A + n);
        for(int i = n-1; i >= n-k;i--) cout << A[i] << " ";
        cout << endl;
    }
    return 0;
}