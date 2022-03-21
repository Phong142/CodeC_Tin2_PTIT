#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
		cin >>n;
		long long n1=1;
		long long n2=1; 
		long long n3;
		if(n==1 || n==2)
			cout << "1";
		else{
		for(int i=1; i<=n-2; i++){
			n3=n2+n1;
			n1=n2; 
			n2=n3;
		}
		cout << n3;
		}
        cout << endl;
    }
    return 0;
}