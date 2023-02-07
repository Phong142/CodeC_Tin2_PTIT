#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, k, a[1001], i, ok;
void inkq(){
    for(int i=0; i<k; i++)
        cout << a[i];
    cout << " ";
}
void sinhth(){
    i=k-1;
    while(i>=0 && a[i]==n-k+i+1) i--;
    if(i>=0){
        a[i]++;
        for(int j=i+1; j<k; j++)
            a[j]=a[j-1]+1;
    }
    else
        ok=0;
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n >> k;
        for(int j=0; j<k; j++)
            a[j]=j+1;
        ok=1;
        while(ok){
            inkq();
            sinhth();
        }
        cout << endl;
    }
    return 0;
}