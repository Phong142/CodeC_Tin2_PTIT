#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[n+5];
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    int max2am=a[0]*a[1];
    int max2duong=a[n-1]*a[n-2];
    int max3am=a[0]*a[1]*a[2];
    int max3duong=a[n-1]*a[n-2]*a[n-3];
    int max2am1duong=a[0]*a[1]*a[n-1];
    int maxx=max(max2am, max(max2duong, max(max3am, max(max3duong, max2am1duong))));
    cout << maxx;
    return 0;
}