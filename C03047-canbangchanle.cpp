#include<stdio.h>

int chanle(long long n){
	long long dem = 0, check = 0;
	while(n){
		if ((n % 10) % 2 == 0) dem ++;
		else check++;
		n /= 10;
	}
	if( check == dem && n % 2==0) return 1;
	else return 0;
}
int mu(long long n){
	long long s =1;
	for(long long i = 1; i <= n;i++) s*= 10;
	return s;
}
int main(){
		long long n, count = 0;
		scanf("%lld", &n);
		long long a = mu(n-1), b= mu(n);
		for(long long i = a; i < b;i++){
			if( chanle(i)){
			printf("%lld ", i);
			count++;}
			if( count == 10){
				printf("\n");
				count = 0;
			}
		}
}