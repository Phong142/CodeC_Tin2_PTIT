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
        int a[n+5];
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a, a+n);
        int minn=min(k, n-k);
        int sum1=0, sum2=0;
        for(int i=0; i<minn; i++)
            sum1+=a[i];
        for(int i=minn; i<n; i++)
            sum2+=a[i];
        cout << sum2-sum1 << endl;
    }
    return 0;
}