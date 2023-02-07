#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, a[1001], i, ok, k;
void inhv(){
    for(int j=1; j<=n; j++)
        a[j]=j;
}
void inkq(){
    for(int j=1; j<=n; j++)
        cout << a[j];
    cout << " ";
}
void sinhhv(){
    i=n-1;
    while(i>0 && a[i]>a[i+1]) i--;
    if(i<=0) ok=1;
    else{
        k=n;
        while(a[k]<a[i]) k--;
        swap(a[k], a[i]);
        int l=i+1, r=n;
        while(l<r){
            swap(a[l], a[r]);
            l++; r--;
        }
    }
}
void hv(){
    inhv();
    ok=0;
    while(ok==0){
        inkq();
        sinhhv();
    }
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n;
        hv();
        cout << endl;
    }
    return 0;
}