#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, a[20], x = 0, dem = 0, b[20];
		scanf("%lld", &n);
		while(n){
			a[x++] = n%10;
			n /=10;
		}
		int dau = 0;
		for(long long i = 0; i < x;i++){
		if(a[i] == 1) dau = 1;
		if(a[i] == 8 || a[i] == 9) a[i] = 0;
		else if(a[i] != 1 && a[i] != 8 && a[i] != 9 && a[i] != 0){
			dau = 0;
			break;
		} 
		}
		if(dau){
			int d = 0;
			for(long long i = x-1; i >= 0;i--){
				if(a[i] == 1) d= 1;
				if(d) printf("%lld", a[i]);
			} printf("\n");
		}
		else printf("INVALID\n");
	}
	
}