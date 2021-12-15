#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long x1, x2, min=0, max=0, a[20], b[20];
		long long y=0, z=0, sum = 0, dem = 0;
		scanf("%lld %lld", &x1, &x2);
		for(long long i = x1; i >0;i /=10) a[y++] = i %10;
		for(long long j = x2; j > 0; j /= 10) b[z++] = j %10;
		for(long long i = y-1;i >=0;i--){
			if(a[i] == 6) a[i] = 5;
			sum = sum*10 + a[i];
		} 
		for(long long j = z-1; j >=0;j--){
		if(b[j] == 6) b[j] = 5;
		dem = dem*10 +b[j];
	}
	long long q=0,e=0;
	for(long long i = y-1;i >=0;i--){
			if(a[i] == 5) a[i] = 6;
			q = q*10 + a[i];
	}
		for(long long j = z-1; j >=0;j--){
		if(b[j] == 5) b[j] = 6;
		e = e*10 +b[j];
	}
	printf("%lld %lld\n", sum+dem, q+e);
}
}