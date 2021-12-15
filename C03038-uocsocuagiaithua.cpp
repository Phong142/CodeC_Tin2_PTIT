#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n, p;
		scanf("%lld%lld", &n, &p);
		long long dem = 0;
		for(long long i = p;i <= n;i +=p){
			long long a = i;
			while(a % p == 0){
				dem++;
				a /= p;
			}
		}
		printf("%lld\n", dem);
	}
	return 0;
}