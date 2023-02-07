#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[21];
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a, a+n);
        long long sum1=0;
        long long sum2=0;
        for(int i=0; i<n; i+=2){
            sum1+=a[i];
            sum1*=10;
        }
        for(int i=1; i<n; i+=2){
            sum2+=a[i];
            sum2*=10;
        }
        cout << sum1/10+sum2/10 << endl;
    }
    return 0;
}