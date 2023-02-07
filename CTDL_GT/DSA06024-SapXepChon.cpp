#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[n + 5] = {}, count = 1;   
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for(int i=0; i<n-1; i++){
        int minx=i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[minx])
                minx=j;
        }
        swap(a[i], a[minx]);
        cout << "Buoc " << count++ << ": ";
        for(int i=0; i<n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}