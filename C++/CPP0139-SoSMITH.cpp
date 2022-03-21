#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int ngto(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int sumcs(int n) {
	int sum=0;
	while(n>0) {
		int m=n%10;
		sum+=m;
		n/=10;
	}
	return sum;
}

int sumts(int n) {
	int sum=0;
	for(int i=2; i<=n; i++) {
		while(n%i==0) {
			sum+=sumcs(i);
			n/=i;
		}
	}
	return sum;
}
int main() {
	faster;
	int test;
	cin >> test;
	while(test--) {
		long n;
		cin>>n;
		if(ngto(n)) cout<<"NO"<<"\n";
		else{
		int tongcs=sumcs(n);
		int tongcsuoc=sumts(n);
		if(tongcs==tongcsuoc) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
	}
	return 0;
}