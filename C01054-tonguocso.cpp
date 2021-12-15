#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long long s= 0;
	cin >> t;
	while(t--){
		int  n;
		cin >> n;
		while(n % 2 == 0){
			s += 2;
			n /= 2;
		}
		for(int i = 3; i <= sqrt(n);i+=2){
			while(n % i == 0){
				s += i;
				n /= i;
			}
		}
		if( n > 1) s += n;
	}
	cout << s;
}