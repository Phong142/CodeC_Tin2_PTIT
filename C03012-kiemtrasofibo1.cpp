#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	long long n1=0;
	long long n2=1; 
	long long n3;
	if(n==0 || n==1)
		printf("1\n");
	else{
		for(int i=1; i<=47; i++){
			n3=n2+n1;
			if(n==n3){
				printf("1");
				break;
			}
			else if(n<n3){
				printf("0");
				break;
			}
			else{
				n1=n2; 
				n2=n3;
			}
		}
	}
}

