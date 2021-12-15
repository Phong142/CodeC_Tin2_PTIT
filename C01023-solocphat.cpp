#include <stdio.h>

int tt(int n){
	int a;
	while(n){
		a=n%10;
		if(a!=0 && a!=6 && a!=8)
			return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int a;
		scanf("%d", &a);
		if(tt(a)==1)
			printf("YES\n");
		else 
			printf("NO\n");
	}
}

