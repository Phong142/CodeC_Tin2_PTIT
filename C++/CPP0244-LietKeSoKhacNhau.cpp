#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[n], b[1000]={0};
    for(int i = 0; i < n;i++){
         cin >> a[i];
         b[a[i]]++;
    }
    sort(a,a+n);
    for(int i = 0; i < n;i++){
        if(b[a[i]] !=0){
            cout << a[i] << " ";
            b[a[i]] = 0;
        }
    }
    return 0;
}