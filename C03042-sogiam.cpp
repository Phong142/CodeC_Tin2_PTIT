#include<stdio.h>
int sogiam(long long n){
	while(n > 9){
		int b = n%10;
		n /= 10;
		int c = n %10;
		if( b >= c) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b, dem = 0;
		scanf("%lld%lld", &a, &b);
		for(long long i = a;i <= b;i++){
		if(sogiam(i)) dem++; 
		}
		printf("%lld\n", dem);
	}
}