#include <stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		long long m;
		scanf("%lld", &m);
		long long tmp=m;
		long long sum=0;
		while(m){
			int a;
			a=m%10;
			sum=sum*10+a;
			m/=10;
		}
		if(sum==tmp)
			printf("YES\n");
		else 	
			printf("NO\n");
	}
}
