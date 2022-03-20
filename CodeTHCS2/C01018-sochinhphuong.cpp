#include <stdio.h>
#include <math.h>

int scp(int n){
	int a=sqrt(n);
	if(a*a==n) return 1;
	else return 0;
}
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		if(scp(n)==1) printf("YES");
		else printf("NO");
	}
}

