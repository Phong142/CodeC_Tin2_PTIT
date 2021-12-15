#include <stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		long long n;
		scanf("%lld", &n);
		printf("%lld\n", (n+1)*n/2);
	}
}
