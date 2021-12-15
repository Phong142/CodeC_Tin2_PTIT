#include <stdio.h>

int Check(int x){
	int check1=0, check2=0, check3=0;
	int tmp=x;
	int sum=0;
	int tong=0;
	while(tmp!=0){
		int a=tmp%10;
		if(a==6) check2=1;
		sum=sum*10+a;
		tong+=a;
		tmp/=10;
	}
	if(sum==x) check1=1;
	if(tong%10==8) check3=1;
	if(check1==1 && check2==1 && check3==1)
		return 1;
	else
		return 0;
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
		if(Check(i)==1)
		printf("%d ", i);
	}
	printf("\n");
}