#include <stdio.h>

int main(){
	long long n;
	scanf("%lld", &n);
	int a;
	int cl=0, cc=0;
	while(n){
		a=n%10;
		if(n%2==0) cc++;
		else cl++;
		n/=10;
	}
		printf("%d %d", cl,cc);
}
