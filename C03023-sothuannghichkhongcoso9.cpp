#include <stdio.h>
#include <math.h>

int tn(int n){
	int a; int tmp=n;
	int sum=0;
	while(n){
		a=n%10;
		if(a==9) return 0;
		sum=sum*10+a;
		n/=10;
	}
	if(sum==tmp)	return 1;
	else 	return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	int tmp=n;
	int count=0;
	for(int i=2; i<=n; i++){
		if(tn(i))
			count++;
	}
	for(int i=2; i<=n; i++){
		if(tn(i))
		printf("%d ", i);
	}
	printf("\n");
	printf("%d", count);
}

