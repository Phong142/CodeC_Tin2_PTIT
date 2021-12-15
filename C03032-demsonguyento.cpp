#include<stdio.h>
#include<math.h>
int nt(int n){
	if( n < 2) return 0;
	for(int i = 2; i <= sqrt(n);i++) if( n % i == 0) return 0;
	return 1;
}
int tatca(int n){
	while(n){
		int a = n % 10;
		if(nt(a) == 0) return 0;
		n /= 10;
	} return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, dem = 0;
		scanf("%d%d", &a, &b);
		for(int i = a; i <= b;i++){
			if(nt(i) && tatca(i)) dem++;
		}printf("%d\n", dem);
	}
}