#include<stdio.h>

int main(){
	long long t;
	scanf("%lld", &t);
	while(t--){
		long long n, check = 0, dem = 0;
		scanf("%lld", &n);
		long long m = n;
		while(m ){
			if((m % 10) % 2 != 0) dem++;
			else check++;
			m /= 10;
		}
		if( check < dem && n % 2 != 0) printf("YES\n");
		else printf("NO\n");
	}
}