#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void hvketiep(){
    int n;
    cin >> n;
    int tc[n+5];
    for(int j=1; j<=n; j++)
        cin >> tc[j];
    int i=n-1;
    while(i>0 && tc[i]>tc[i+1]) i--;
    if(i<=0){
        for(int j=1; j<=n; j++)
            cout << j <<" ";
        cout << endl;
    }
    else{
        int k=n;
        while(tc[k]<tc[i]) k--;
        swap(tc[k], tc[i]);
        int l=i+1, r=n;
        while(l<r){
            swap(tc[l], tc[r]);
            l++; r--;
        }
        for(int j=1; j<=n; j++)
            cout << tc[j] << " ";
        cout << endl;
    }
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        hvketiep();
    }
    return 0;
}