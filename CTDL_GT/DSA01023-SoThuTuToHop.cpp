#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, k, a[1001], b[1001], ok;
void sinhth(){
    int i=k-1;
    while(i>=0 && a[i]==n-k+i+1) i--;
    if(i<0) ok=0;
    else{
        a[i]++;
        for(int j=i+1; j<k; j++)
            a[j]=a[j-1]+1;
    }
}
int check(){
    for(int i=0; i<k; i++){
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
        int count=1;
        cin >> n >> k;
        for(int i=0; i<k; i++)
            a[i]=i+1;
        for(int i=0; i<k; i++)
            cin >> b[i];
        ok=1;
        while(ok){
            if(check()){
                cout << count << endl;
                break;
            }
            else{
                sinhth();
                count++;
            } 
        }
    }
    return 0;
}