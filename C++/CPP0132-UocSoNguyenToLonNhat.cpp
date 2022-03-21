#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

long long snt(long long n){
	for(long long i = 2; i <= sqrt(n);i++) if( n%i==0) return 0;
	return 1;
}
int main(){
    faster;
	int t;
	cin >> t;
	while(t--){
		long long n, max= 0;
		cin >> n;
		for(long long i = 1; i <= sqrt(n);i++){
			if(n%i==0){
				if(snt(i) && i > max) max = i;
				if(snt(n/i) && n/i > max) max = n/i;
			}
		}
		cout << max << endl;
	}
}
