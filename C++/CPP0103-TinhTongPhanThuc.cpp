#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >>n;
    double sum=0;
    for(int i=1; i<=n; i++){
        sum+=1.0/(double)i;
    }
    cout << setprecision(4) << fixed << sum;
    return 0;
}