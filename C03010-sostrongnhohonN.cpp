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
int tong(int x){
	int tmp=x;
	int sum=0;
	while(tmp!=0){
		int a=tmp%10;
		sum+=gthua(a);
		tmp/=10;
	}
	if(sum==x) return 1;
	else return 0;
}
int main(){
	int x;
	scanf("%d", &x);
	for(int i=1; i<=x; i++){
		if(tong(i))
			printf("%d ", i);
	}
}
