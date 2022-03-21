#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n;
        cin >> n;
        long long A[n][n], B[n*n], k = 0;
        for(long long i = 0; i < n;i++)
            for(long long j = 0; j < n;j++)
            cin >> A[i][j];
        for(long long i = 0; i < n;i++){
            long long a = i;
            if( a % 2 == 0){
                for(long long j = 0; j < n;j++) B[k++] = A[i][j];
            }
            else{
                for(long long j = n-1; j >= 0;j--) B[k++] =A[i][j];
            }
        }
       for(long long i = 0; i < k;i++) cout << B[i] << " ";
        cout << endl;
    }
    return 0;
}