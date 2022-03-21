#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

long long n;
void chia(){
    long long a=0;
    while(n){
        a+=n%10;
        n/=10;
    }
    n=a;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n; 
        while(n>9)
            chia();
        cout << n;
        cout << endl;
    }
    return 0;
}