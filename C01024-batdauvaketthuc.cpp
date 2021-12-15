#include <stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		long long m;
		scanf("%lld", &m);
		long long tmp=m;
		long long sum=0;
		int a;
		while(m){
			a=m%10;
			sum=sum*10+a;
			m/=10;
		}
		if(a==tmp%10)
			printf("YES\n");
		else 	
			printf("NO\n");
	}
}
