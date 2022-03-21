#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long a,x,y;
		cin>>a>>x>>y;
		long long gcd=__gcd(x,y);
		while(gcd--){
			cout<<a;
		}
        cout << endl;
    }
    return 0;
}