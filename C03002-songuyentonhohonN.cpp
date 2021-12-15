#include <stdio.h>
#include <math.h>

int nto(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int a;
	scanf("%d", &a);
	if(a>=2)	
		printf("2\n");
	for(int i=3; i<a; i+=2){
		if(nto(i)==1)
			printf("%d\n", i);
	}
}

