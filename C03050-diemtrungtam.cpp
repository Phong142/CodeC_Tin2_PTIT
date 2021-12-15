#include<stdio.h>
int main (){
	long long n,i, a[100000], tt, count=0, check, j;
	scanf("%lld", &n);
	for (i=0; i<2*n-2; i++)
		scanf("%lld", &a[i]);
	for (i=0; i<4; i++) {
		for(j=i+2; j<4; j++)
		if (a[i]==a[j]) {
		tt=a[i];
		check=1;}
	}
	for (i=0; i<2*n-2; i++) {
		if (a[i]==tt) count++;
	}
	if(check==1 && count==(n-1)) printf("Yes\n"); else printf("No\n");
	return 0;
}