#include <stdio.h>
#include <math.h>


int snt(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int csnt(int n){
	int k;
	while(n>0){
		k=n%10;
		n/=10;
		if(k!=2 && k!=3 && k!=5 && k!=7) return 0;
	}
	return 1;
}
int tong(int n){
	int sum=0;
	while(n){
		sum=sum+n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int x, y;
	int test;
    scanf("%d",&test);
	while(test--){
		int count=0;
		scanf("%d%d", &x, &y);
		for(int i=x; i<=y; i++){
			if(csnt(i) && snt(tong(i)) && snt(i))
				count++;
		}
	printf("%d\n", count);
	}
}