#include<stdio.h>
#include<math.h>

long long nt(long long a){
	for(long long i = 2 ; i <= sqrt(a) ; i++)	if(a%i==0) return 0;
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		int count=0;
		for(int i = a ; i <= sqrt(b) ; i++) if(i!=1 && nt(i)) count++;
		printf("%d\n",count);
	}
	return 0;
}