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
        int a[n+5], b[n+5]={};
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(a, a+n);
        for(int i=0; i<n; i++){
            if(a[i]!=b[i]){
                cout << i+1 << " ";
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(a[i]!=b[i]){
                cout << i+1 << " ";
                break;
            }
        }
        cout << endl;
    }
    return 0;
}