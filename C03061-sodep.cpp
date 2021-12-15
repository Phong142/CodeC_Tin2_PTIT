#include<stdio.h>
#include<math.h>
int stn(long long n){
	int a[20], i = 0;
	while(n){
		a[i++] = n %10;
		n /= 10;
	}
	for(int j = 1; j <= (i-1)/2;j++){
		if(a[j] != a[i-j-1]) return 0;
	} return 1;
}
int snt(long long n){
	int a[20], i = 0;
	while(n){
		a[i++] = n %10;
		n /= 10;
	}
	if(a[i-1] == 2*a[0] || a[0] == 2*a[i-1]) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(stn(n) && snt(n)) printf("YES\n");
		else printf("NO\n");
	}
}