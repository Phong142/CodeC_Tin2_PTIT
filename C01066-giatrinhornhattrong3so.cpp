#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d%d%d", &a, &b, &c);
	int min=100001;
	if(a<b) min=a;
	else min=b;
	if(min>c) min=c;
	printf("%d", min);
}
