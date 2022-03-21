#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// int nto(int n){
//     if(n<2) return 0;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0) return 0;
//     }
//     return 1;
// }
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n;
        cin >> n;
        while(n%2==0){
            cout << 2 <<" ";
            n/=2;
        }
        for(int i=3; i<=sqrt(n); i+=2){
            while(n%i==0){
                cout << i << " ";
                n=n/i;
            }
        }
        if(n>2)
            cout << n;
        cout << endl;
    }
    return 0;
}