#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        long long k;
        cin >> n >> k;
        int s=0;
        for(int i=1; i<=n; i++){
            s+=i%k;
        }
        cout << s;
        cout << endl;
    }
    return 0;
}