#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, k, a[11], ok;
void inkq(){
    for(int i=1; i<=n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void sinhhv(){
    int i=n-1;
    while(i>0 && a[i] > a[i+1]) i--;
    if(i<=0) ok=1;
    else{
        int k=n;
        while(a[k]<a[i]) k--;
        swap(a[k], a[i]);
        int l=i+1, r=n;
        while(l<r){
            swap(a[l], a[r]);
            l++; r--;
        }
    }
}
int main() {
    faster;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1, a+n+1);
    ok=0;
    while(ok==0){
        inkq();
        sinhhv();
    }
    return 0;
}