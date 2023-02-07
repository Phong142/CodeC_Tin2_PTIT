#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, k, a[1001], ok;
void inkq(){
    for(int i=0; i<n; i++)
        cout << a[i];
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
int checkbit(){
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]==1)
            count++;
    }
    if(count==k)
        return 1;
    return 0;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n >> k;
        ok=1;
        while(ok){
            if(checkbit()){
                inkq();
                sinhnp();
            }
            else    
                sinhnp();
        }
        cout << endl;
    }
    return 0;
}