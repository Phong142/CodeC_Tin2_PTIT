#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;  
        int a[n+5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n);
        int count=0;
        for(int i=0; i<n-1; i++){
            if(a[i]>k) break;
            else{
                for(int j=i+1; j<n; j++){
                    if(a[i]+a[j]==k)
                        count++;
                    else if(a[i]+a[j]>k)
                        break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}