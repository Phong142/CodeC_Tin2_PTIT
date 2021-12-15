#include<stdio.h>

int stn(long long n){
	long long dao = 0, tong = 0;
	long long m = n;
	while(n){
		dao = dao*10 + n%10;
		if(n % 10 == 0) return 0;
		tong += n%10;
		n /= 10;
	}if (dao == m && tong % 2 == 1 ) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(stn(n)) printf("YES\n");
		else printf("NO\n");
	}
}