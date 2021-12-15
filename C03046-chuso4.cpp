#include<stdio.h>

int stn(long long n){
	long long dao = 0, tong = 0;
	long long m = n;
	while(n){
		dao = dao*10 + n%10;
		if(n % 10 == 4) return 0;
		tong += n%10;
		n /= 10;
	}if (dao == m && tong % 10 == 0 ) return 1;
	else return 0;
}
int mu(long long n){
	long long s =1;
	for(long long i = 1; i <= n;i++) s*= 10;
	return s;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long a = mu(n-1), b= mu(n);
		for(long long i = a; i <= b;i++){
			if( stn(i)) printf("%lld ", i);
		} printf("\n");
	}
}