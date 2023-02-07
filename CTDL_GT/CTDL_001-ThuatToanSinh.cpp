#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, a[1001], ok, i;
void sinhnp(){
    i=n-1;
    while(i>=0 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i>=0) a[i]=1;
    else ok=0;
}
void inkq(){
    for(int j=0; j<n; j++)
        cout << a[j] << " ";
    cout << endl;
}

int checkdx(){
    for(int j=0; j<n; j++){
        if(a[j]!=a[n-j-1])
            return 0;
    }
    return 1;
}

int main() {
    faster;
    cin >> n;
    ok=1;
    while(ok){
        if(checkdx()==1){
            inkq();
            sinhnp();
        }
        else sinhnp();
    }
    return 0;
}