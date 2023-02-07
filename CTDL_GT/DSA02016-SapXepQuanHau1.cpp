#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int a[20], cnt=0;
bool ok(int x2, int y2){
    for(int i=1; i<x2; i++){
        if(a[i]==y2 || abs(i-x2) == abs(a[i]-y2))
            return false;
    }
    return true;
}
void tryy(int i, int n){
    for(int j=1; j<=n; j++){
        if(ok(i, j)){
            a[i]=j;
            if(i==n)
                cnt++;
            else tryy(i+1, n);
        }
    }
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        tryy(1, n);
        cout << cnt;
        cnt=0;
        cout << endl;
    }
    return 0;
}