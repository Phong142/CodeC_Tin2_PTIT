#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        int count=0;
        for(int i=m; i<=n; i++){
            if(i%a==0 || i%b==0)
                count++;
        }
        cout << count;
        cout << endl;
    }
    return 0;
}