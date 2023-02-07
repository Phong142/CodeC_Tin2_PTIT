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
        long long a[n+5];
        long long minn=999999999;
        int k=0;
        for(int i=0; i<n; i++){
            cin >> a[i]; 
            if(a[i]<minn){
                minn=a[i];
                k=i;
            }
        }
        cout << k << endl;
    }
    return 0;
}