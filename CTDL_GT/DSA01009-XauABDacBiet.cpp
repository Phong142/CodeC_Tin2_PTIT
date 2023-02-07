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
int check(){        //A=0   B=1
    int cntt=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<k; j++){
            if(a[i]==0 && a[i]==a[i+1])
                cntt++;
            if(cntt==k){
                return 1;
                break;
            }
        }
    }
    return 0;
}
int main() {
    faster;
    int count=0;
    cin >> n >> k;
    ok=1;
    while(ok){
        if(check()){
            sinhnp(); 
            count++;
        }
        else sinhnp();
    }
    for(int i=0; i<n; i++)
        a[i]=0;
    cout << count << endl;
    ok=1;
    count=0;
    while(ok){
        if(check()){
            inkq();
            sinhnp();
        }
        else sinhnp();
    }
    return 0;
}