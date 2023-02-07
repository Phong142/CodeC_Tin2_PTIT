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
        int count=0;
        for(int i=0; i<n; i++){
            int tmp;
            cin >> tmp;
            if(tmp==0) count++;
        }
        cout << count << endl;
    }
    return 0;
}