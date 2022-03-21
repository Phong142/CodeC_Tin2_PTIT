#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, check = 0;
        cin >> n;
        int a[n + 5], b[n + 5] = {0};
        for(int i = 0; i < n;i++) cin >> a[i];
        for(int i = n-1; i > 0;i--){
            if(a[i] < a[i-1]){
                 swap(a[i], a[i-1]);
                 check = 1;
                 break;
            }
        }
        if(check == 1){
             for(int i = 0; i < n;i++) cout << a[i] << " ";
        }
        else {
            for(int i = n-1; i >= 0;i--) cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}