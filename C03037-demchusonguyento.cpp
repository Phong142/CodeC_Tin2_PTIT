#include<stdio.h>
#include<math.h>
long long nTo(long long n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++)
	if( n % i == 0) return 0;
return 1;
}
int main(){
	long long n, a[20], i=0, b[20] = {0};
	scanf("%lld", &n);
	while(n){
		a[i] = n % 10;
		b[a[i]]++;
		n /= 10;
		i++;
	}
		
	for(long long j = i-1; j >= 0;j--){
		if(nTo(a[j]) ==  1 && b[a[j]] > 0){
			printf("%lld %lld\n", a[j], b[a[j]]);
		} b[a[j]]= 0;
	} 
}