#include <stdio.h>

int main(){
	long long n;
	scanf("%lld", &n);
	long long sum=1; long long tich=1;
	for(int i=2; i<=n; i++){
		tich*=i; 
		sum+=tich;
	}
	printf("%lld", sum);
}

