#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[n+5];
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a, a+n);
        if(n%2==0){
            for(int i=0; i<n/2; i++)
                cout << a[n-i-1] << " " << a[i] << " ";
        }
        else{
            for(int i=0; i<(n-1)/2; i++)
                cout << a[n-i-1] << " " << a[i] << " ";
            cout << n/2+1;
        }
        cout << endl;
    }
    return 0;
}