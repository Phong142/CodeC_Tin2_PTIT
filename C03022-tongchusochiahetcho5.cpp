#include <stdio.h>
#include <math.h>
int tach(int n){
	int sum=0;
	int a;
	while(n){
	a=n%10;
	sum+=a;
	n/=10;
	}
	if(sum%5==0)	return 1;
	else 	return 0;
}
int nto(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d", &n);
	int count=0;
	for(int i=0; i<n; i++){
		if(tach(i) && nto(i))
			count++;
	}
	for(int i=0; i<n; i++){
		if(tach(i) && nto(i))
			printf("%d ", i);
	}
	printf("\n");
	printf("%d", count);
}

