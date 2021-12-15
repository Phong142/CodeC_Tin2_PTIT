#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, a[100000];
		scanf("%d", &n);
		long long max, sum;
		int k = 0;
		for(long long i = 0; i < n;i++){
			scanf("%lld", &a[i]);
			if(a[i] > 0) k = 1;
			if(i == 0) max = a[i];
			else if( max < a[i]) max = a[i];
		}
		if( k == 0) printf("%lld\n", max);
		else{
			long long sum = 0, x = 0;
			for(long long i = 0; i < n;i++){
				if(sum + a[i] <0){
					sum = 0;
					continue;
				}
				sum += a[i];
				if(x < sum) x = sum;
			}
		 printf("%lld\n", x);
	}
	}
}