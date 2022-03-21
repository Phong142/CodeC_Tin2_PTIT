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
        long long A[n][n], B[n][n];
        for(long long i = 0; i < n;i++){
            for(long long j = 0; j < n;j++){
                cin >> A[i][j];
            }
        }
        for(long long i = 0; i < n;i++){
            for(long long j = 0; j < n;j++){
                if(i == 0 || j == 0 || j == n-1 || i == n-1) cout << A[i][j] << " ";
                else cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}