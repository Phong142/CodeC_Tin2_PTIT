#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n, check = 0;
        cin >> n;
        long long A[n], min = 1e8;
        for(long long i = 0; i < n;i++) cin >> A[i];
        for(long long i = 0; i < n-1;i++){
            for(long long j = i+1; j < n;j++){
                if(A[i] == A[j])
                if(min > j)  min = j;
            }
        }
        if(min == 1e8) cout << -1 << endl;
        else cout << A[min] << endl;
    }
    return 0;
}