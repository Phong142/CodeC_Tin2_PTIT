#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >>n;
        long long a[n+5];
        int count=0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i]!=0)
                cout << a[i] << " ";
            else 
                count++;
        }
        for(int i=0; i<count; i++) {
            cout <<"0 ";
        }
        cout << endl;
    }
    return 0;
}