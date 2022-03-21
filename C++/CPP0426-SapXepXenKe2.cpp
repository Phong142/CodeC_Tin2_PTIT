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
        long long a[n+5], b[n+5];
        for(long long i = 0; i < n;i++) 
            cin >> a[i];
        sort(a, a+n);
        long long k = n, m = 0;
        for(long long i = 0;i < n;i +=2){
                b[i] = a[k-1];
                k--;
        }
        for(long long i = 1;i < n; i+=2){
            b[i] = a[m];
            m++;
        }
        for(long long i = 0; i < n;i++) cout << b[i] << " ";
        cout << endl;

    }
    return 0;
}