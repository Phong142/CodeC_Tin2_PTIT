#include <stdio.h>
#include <math.h>

int thuannghich(int x){
	int tmp=x;
	int sum=0;
	while(tmp!=0){
		int a=tmp%10;
		sum=sum*10+a;
		tmp/=10;
	}
	if(sum==x) return 1;
	else return 0;
}
int nto(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int x,y;
		scanf("%d%d", &x, &y);
		int a[10001];
		int j=0;
		for(int i=x; i<=y; i++){
			if(thuannghich(i) && nto(i))
				a[j++]=i;
		}
		for(int i=0; i<j; i++){
			if(i%10==0 && i>0)	printf("\n");
			printf("%d ", a[i]);
		}
		printf("\n");
		printf("\n");
	}
}
