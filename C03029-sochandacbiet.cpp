#include<stdio.h>

int main(){
	long long t;
	scanf("%lld", &t);
	while(t--){
		long long n, check = 1;
		scanf("%lld", &n);
		long long m = n;
		while(m /= 10){
			if((m % 10) % 2 != 0){
				check = 0;
				break;
			}
		}
		if( check == 1 && n % 2 == 0) printf("YES\n");
		else printf("NO\n");
	}
}