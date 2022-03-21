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
        int a[n+5];
        int sum=0;
        for (int i = 0; i < n-1; i++){
            cin >> a[i];
            sum+=a[i];
        }
        cout << (n+1)*n/2-sum;
        cout << endl;
    }
    return 0;
}