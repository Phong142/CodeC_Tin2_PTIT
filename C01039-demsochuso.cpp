#include <stdio.h>

int main(){
	long long n;
	scanf("%lld", &n);
	int a;
	int count=0;
	while(n){
		a=n%10;
		count++;
		n/=10;
	}
		printf("%d", count);
}
