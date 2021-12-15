#include <stdio.h>

int main(){
	long long n;
	scanf("%lld", &n);
	int n1=0; int n2=1; int n3;
	printf("0 1 ");
	for(int i=2; i<n; i++){
	n3=n1+n2;
	n1=n2;
	n2=n3;
	printf("%lld ", n3);
	}
}
