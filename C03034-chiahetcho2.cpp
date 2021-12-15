#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, check = 0;
		scanf("%lld", &n);
		for (long long i = 1; i <= sqrt(n);i++){
			if(n % i == 0){
				if( i % 2== 0) check++;
				if( n/i % 2 == 0 && n/i != i) check++;
			}
		}
		printf("%lld\n", check);
	}
}