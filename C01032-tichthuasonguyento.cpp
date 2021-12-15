#include<stdio.h>
#include<math.h>

int ktnt(long long n){
	long long i;
	if(n<2) return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	long long k;
	scanf("%lld",&k);
	while(k--){
		long long n;
		scanf("%lld",&n);
		long long i;
		long long m=1;
		if(ktnt(n)==1) m*=n;
	//	else if((int)sqrt(n)==(float)sqrt(n)&&ktnt(sqrt(n))==1) m*=sqrt(n);
		else{
			for(i=2;i<sqrt(n);i++){
				if(n%i==0){
					if(ktnt(i)==1) m*=i;
					if(ktnt(n/i)==1) m*=(n/i);
				}
			}
		}
		printf("%d\n",m);
	}
	return 0;
}