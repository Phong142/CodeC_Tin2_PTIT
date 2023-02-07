#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int n, a[1001], b[1001], ok;
void sinhhv(){
    int i=n-1;
    while(i>0 && a[i]>a[i+1]) i--;
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
int check(){
    for(int i=1; i<=n; i++){
        if(a[i]!=b[i])
            return 0;
    }
    return 1;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n;
        for(int i=1; i<=n; i++)
            cin >> b[i];
        for(int i=1; i<=n; i++)
            a[i]=i;
        ok=0;
        int count=1;
        while(ok==0){
            if(check()){
                cout << count << endl;
                break;
            }
            else{
                sinhhv();
                count++;
            }
        }
        cout << endl;
    }
    return 0;
}