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
        long long sum=0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum+=a[i];
        }
        long long left=0;
        for(int i=0; i<n-1; i++){
            left+=a[i];
            if(left == sum-left-a[i+1]){
                cout << i+2;
                break;
            }

        }
        if(left==sum-a[n-1]) cout << -1;
        cout << endl;
    }
    return 0;
}