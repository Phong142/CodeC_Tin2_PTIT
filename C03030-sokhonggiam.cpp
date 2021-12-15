#include <stdio.h>
int sokhonggiam (long long n) 
{
	int i, d=0, a[1000], b[1000], e = 0;
	while (n!=0) {
		a[d] = n % 10;
		n /= 10;
		b[e] = n % 10;
		if(a[d] < b[e]) return 0; 
	}
	return 1;
}
int mu(int n){
	int s = 1;
	for(int i = 1; i <= n;i++){
		s *= 10;
	}
	return s;
}

int main () 
{
	int t;
	long long n;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld", &n);
		long long a = mu(n-1), b = mu(n);
		for(long long i = a; i <= b;i++){
			if(sokhonggiam(i)) printf("%lld ", i);
		} printf("\n");
	}
	return 0;
}