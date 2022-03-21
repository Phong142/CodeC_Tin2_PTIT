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
        int a[1001]={};
        int x=0;
        for(int i=2; i<=n; i++){
            // int count=0;
            // while(n%i==0){
            //     count++;
            //     n/=i;
            // }
            // if(count==k){
            //     cout << i;
            //     break;
            // }
            while(n%i==0){
                a[x++]=i;
                n/=i;
            }
        }
        for(int i=0; i<x; i++){
            if(i==k-1){
                cout << a[i];
                break;
            }
        }
        if(x<k) cout << "-1";
        cout << endl;
    }
    return 0;
}