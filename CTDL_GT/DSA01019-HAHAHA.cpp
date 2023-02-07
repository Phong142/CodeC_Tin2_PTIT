#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, a[1001], ok;
void inkq(){
    for(int i=0; i<n; i++){
        if(a[i]==0)
            cout << "A";
        else cout << "H";
    }
    cout << endl;
}
void sinhnp(){
    int i=n-1;
    while(i>=0 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i>=0) a[i]=1;
    else ok=0;
}
int checkhahaha(){
    for(int i=0; i<n; i++){
        if(a[0]==0)
            return 0;
        if(a[n-1]==1)
            return 0;
        if(a[i]==1 && a[i+1]==1)
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
        ok=1;
        while(ok){
            if(checkhahaha()){
                inkq();
                sinhnp();
            }
            else sinhnp();
        }
        cout << endl;
    }
    return 0;
}