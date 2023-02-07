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
        vector <int> a;
        vector <int> b;
        for(int i=0; i<n; i++){
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        for(int i=0; i<n-1; i++){
            int tmp;
            cin >> tmp;
            b.push_back(tmp);
        }
        for(int i=0; i<n; i++){
            if(a[i]!=b[i]){
                cout << i+1;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}