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
        int check=0;
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                check=1;
            }
        }
        if(check==1){
            cout << "Buoc " << count++ << ": ";
            for(int k=0; k<n; k++)
                cout << a[k] << " ";
            cout << endl;
        } 
    }
    return 0;
}