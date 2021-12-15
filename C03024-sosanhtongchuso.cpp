#include <stdio.h>

int tt(int n){
	int a;
	int sum=0;
	while(n){
		a=n%10;
		sum+=a;
		n/=10;
	}
	return sum;
}
int main(){
	int b,c;
	scanf("%d%d", &b, &c);
	if(tt(b)<(tt(c)))
		printf("%d %d", b, c);
	else if (tt(c)<tt(b))
		printf("%d %d", c, b);
	else 
		printf("%d %d", b, c);
}

