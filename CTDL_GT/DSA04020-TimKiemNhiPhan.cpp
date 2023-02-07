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
        vector <int> a;
        int j=0;
        for(int i=0; i<n; i++){
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        for(int i=0; i<n; i++){
            if(a[i]==k){
                cout << i+1;
                j=1;
                break;
            }
        }
        if(j==0)
            cout << "NO";
        cout << endl;
    }
    return 0;
}