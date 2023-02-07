#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[n+5] = {}, b[n+5] = {}, count=0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for(int i=0; i<n; i++){
        int j=i;
        while(a[i]<b[j-1] && j){
            b[j--]=b[j];
        }
        b[j]=a[i];
        cout << "Buoc " << count++ << ": ";
        for(int k=0; k<=i; k++)
            cout << b[k] << " ";
        cout << endl;
    }
    return 0;
}