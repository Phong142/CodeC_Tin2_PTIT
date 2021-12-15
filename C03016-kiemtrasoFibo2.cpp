#include <stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		long long n;
		scanf("%lld", &n);
		long long n1=0;
		long long n2=1; 
		long long n3;
		if(n==0 || n==1)
			printf("YES\n");
		else{
			for(long long i=1; i<=92; i++){
				n3=n2+n1;
				if(n==n3){
					printf("YES\n");
					break;
				}	
				else if(n<n3){
					printf("NO\n");
					break;
				}
				else{
					n1=n2; 
					n2=n3;
				}
			}
		}
	}
}

