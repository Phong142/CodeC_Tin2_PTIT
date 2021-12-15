#include <stdio.h>
#include <math.h>

int Nto(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int CheckFibo(int n){
	long long n1=0;
	long long n2=1; 
	long long n3;
	int sum=0;
	while(n){
		int a=n%10;
		sum+=a;
		n/=10;
	}
	if(sum==0 || sum==1)
		return 1;
	else{
		for(int i=1; i<=47; i++){
			n3=n2+n1;
			if(sum==n3)
				return 1;
			else if(sum<n3)
				return 0;
			else{
				n1=n2; 
				n2=n3;
			}
		}
	}
}
int main(){
	int n,m;
	scanf("%d%d", &n, &m);
	if(n>m){
		int tmp=n;
		n=m;
		m=tmp;
	}
	for(int i=n; i<=m; i++){
		if(Nto(i) && CheckFibo(i))
			printf("%d ", i);
	}
}

