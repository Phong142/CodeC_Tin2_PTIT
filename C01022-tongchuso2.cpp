#include <stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		int a, sum=0;
		while(n){
			a=n%10;
			sum+=a;
			n/=10;
		}
		printf("%d\n", sum);
	}
}

