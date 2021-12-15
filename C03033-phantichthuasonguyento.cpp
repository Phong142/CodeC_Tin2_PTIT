#include<stdio.h>

int main(){
	int  t;
	scanf("%d", &t);
	while(t--){
		long long n, dem = 0;
		scanf("%lld", &n);
		printf("%lld = ", n);
		for(long long i = 2; i <= n; i++){
			while(n % i == 0){
				dem++;
				n /= i;
			}
			if(dem > 0) printf("%lld^%lld", i,dem);
			if(dem > 0 && n != 1  ) printf(" * ");
			dem = 0;
		}
		printf("\n");
	}
}