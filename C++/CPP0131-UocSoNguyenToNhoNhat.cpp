#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int solve(int n){
    if(n==1) return 1;
    if(n % 2 == 0) return 2;
    for(int i = 3;i <= n;i+=2) if(n%i==0) return i;
    return 0;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        for(int i = 1; i <= n;i++){
            cout << solve(i) << " ";
        }
        cout << endl;
    }
    return 0;
}

