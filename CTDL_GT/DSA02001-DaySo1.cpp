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
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++){
            cout << "[";
            for(int j=0; j<n-i; j++){
                if(i) a[j]=a[j]+a[j+1];
                if(j==n-i-1) cout << a[j] << "]" << endl;
				else cout << a[j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}