#include <stdio.h>

int main(){
	long long n;
	scanf("%lld", &n);
	int a;
	int count=1;
	while(n){
		a=n%10;
		count*=a;
		n/=10;
	}
		printf("%d", count);
}
