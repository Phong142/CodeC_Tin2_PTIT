#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n, d;
        cin >> n >> d;
        long long a[n];
        for (long long i = 0; i < n; i++){
            cin >> a[i];
        }
        for(long long i=d; i<n; i++) 
            cout << a[i] << " ";
        for(long long i=0; i<d; i++) 
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}