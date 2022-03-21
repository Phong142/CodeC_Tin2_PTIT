#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, dem = 0;
        cin >> n;
        for(int i = 1; i <=sqrt(n);i++){
            if(n%i==0){
                int b = n / i;
                if(i % 2 == 0) dem++;
                if(i*i != n && b % 2 ==0) dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}