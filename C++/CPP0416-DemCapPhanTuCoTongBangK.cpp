#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        int A[n];
        for(int i = 0; i < n;i++) cin >> A[i];
        int dem = 0;
        for(int i = 0; i < n-1;i++){
            for(int j = i+1; j < n;j++){
                if((A[i]+A[j]) == k) dem++;
            }
        }
        cout << dem << endl;
        cout << endl;
    }
    return 0;
}