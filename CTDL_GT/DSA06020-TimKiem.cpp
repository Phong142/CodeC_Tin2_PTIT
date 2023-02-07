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
        int a[100001]={};
        for(int i=0; i<n; i++){
            int tmp;
            cin >> tmp;
            a[tmp]++;
        }
        if(a[k]>=1) cout << 1;
        else cout << -1;
        cout << endl;
    }
    return 0;
}