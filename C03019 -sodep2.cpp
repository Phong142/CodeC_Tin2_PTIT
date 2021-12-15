#include<stdio.h>
#include<math.h>
#include<string.h>
int tong(int n){
	int tong = 0;
	while(n>0){
		tong = tong + n%10;
		n /= 10;
	} if( tong % 10 == 0) return 1;
	else return 0;
}
int stn(int n){
	int dao = 0;
	int m = n;
	while(n>0){
		dao = dao*10 + n%10;
		n /= 10;
	}if( dao == m ) return 1;
	else return 0;
}
int mu(int n){
	int s = 1;
	for(int i = 1; i <= n;i++){
		s *= 10;
	}
	return s;
}
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int d = 0;
		int a = mu(n-1), b = mu(n);
		for(int i = a; i<b;i++){
			if(stn(i) && tong(i)) d++;
		}
		printf("%d\n", d);
	}
}