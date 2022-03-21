#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >>n;
    long long sum=0, tich=1;
    for(int i=1; i<=n; i++){
        tich*=i;
        sum+=tich;
    }
    cout << sum;
    return 0;
}