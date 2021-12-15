#include<stdio.h>

long long check(long long a, long long b){
	while( b != 0){
		long long tmp = a % b;
					a = b;
					b = tmp;
	}
	return a;
}

long long GCM(long long a, long long b){
		return (a*b)/check(a,b);
	}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long sum = 1;
		for(long long i = 1; i <= n;i++){
			sum = GCM(sum,i);
		}
		printf("%lld\n", sum);
	}
}