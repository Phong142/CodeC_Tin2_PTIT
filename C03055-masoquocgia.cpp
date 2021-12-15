#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a;
		scanf("%lld",&a);
		int x[20];
		int count=0;
		for(long long i = a ; i > 0 ; i /= 10){
			x[count]=i%10;
			count++;
		}
		int dau=0;
		for(int i = count-1 ; i >= 2 ; i --){
			if(x[i]==0 && x[i-1] == 8 && x[i-2]==4){
				x[i]=11;
				x[i-1]=11;
				x[i-2]=11;
				break;
			}
		}
		for(int i = count-1 ; i>=0 ; i -- ){
			if(x[i] < 10) printf("%d",x[i]);
		}
		printf("\n");
	}
	return 0;
}