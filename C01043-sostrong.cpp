#include <stdio.h>

int gthua(int n){
	int tich=1;
	if(n==0 || n==1) return 1;
	else{
		for(int i=1; i<=n; i++){
			tich=tich*i;
		}
	return tich;
	}
}
int main(){
	int x,p;
	scanf("%d", &x);
	int tmp=x;
	int sum=0;
	while(tmp!=0){
		p=tmp%10;
		sum+=gthua(p);
		tmp/=10;
	}
	if(sum==x) printf("1");
	else printf("0");
	}
