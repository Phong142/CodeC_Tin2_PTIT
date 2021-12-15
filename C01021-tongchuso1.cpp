#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a, sum=0;
	while(n){
	a=n%10;
	sum+=a;
	n/=10;
	}
	printf("%d", sum);
}
