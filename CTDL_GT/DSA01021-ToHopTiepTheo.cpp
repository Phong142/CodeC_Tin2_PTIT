#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int ok;
int thtt(int a[], int n, int k, set <int> b){
    int i=k, len=b.size();
    while(i>0 && a[i]==n-k+i) i--;
    if(i>0){
        a[i]++;
        b.insert(a[i]);
        for(int j=i+1; j<=k; j++){
            a[j]=a[j-1]+1;
            b.insert(a[j]);
        }
        return b.size()-len;
    }
    else return k;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        int a[n+5];
        set <int> s;
        for(int i=1; i<=k; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        int count=thtt(a, n, k, s);
        cout << count;
        cout << endl;
    }
    return 0;
}