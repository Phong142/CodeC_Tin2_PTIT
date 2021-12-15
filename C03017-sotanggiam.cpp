#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n);i++) if(n % i == 0) return 0;
	return 1;
}
int mu(int n){
	int s = 1;
	for(int i = 1; i <= n;i++) s *= 10;
	return s;
}
int tang(int n){
	int a = n;
	while(a>9){
		int b = a % 10;
		a /= 10;
		int c = a % 10;
		if(c >= b) return 0;
	}
	return 1;
}
int giam(int n){
	int a = n;
	while(a>9){
		int b = a % 10;
		a /= 10;
		int c = a % 10;
		if(c <= b) return 0;
	}
	return 1;
}
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int i = mu(n-1), count =0;
		while( i < mu(n)){
			if(tang(i) || giam(i)){
				if(nt(i)== 1) count++;
		}
			if(i % 2== 0) i++;
			else i += 2;
		}
		printf("%d\n", count);
	}
}