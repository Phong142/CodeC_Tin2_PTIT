#include <stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		long long n1=1;
		long long n2=1; 
		long long n3;
		if(n==1 || n==2)
			printf("1\n");
		else{
		for(int i=1; i<=n-2; i++){
			n3=n2+n1;
			n1=n2; 
			n2=n3;
		}
		printf("%lld\n", n3);
		}
	}
}

