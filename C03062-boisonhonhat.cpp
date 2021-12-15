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
		long long n, m;
		scanf("%lld%lld", &n, &m);
		long long sum = n;
		for(long long i = n; i <= m;i++){
			sum = GCM(sum,i);
		}
		printf("%lld\n", sum);
	}
}