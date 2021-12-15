#include<stdio.h>

int main(){
	int n, U, D;
	scanf("%d", &n);
	int sumU=0, sumD=0, minU = 500000, minD = 500000;
	for(int i = 1; i<= n;i++) {
		scanf("%d %d", &U, &D);
		sumU += U;
		sumD += D;
		if(minU > U) minU = U;
		if(minD > D) minD = D;
	}
	sumU += minD;
	sumD += minU;
	if(sumU > sumD) printf("%d", sumU);
	else printf("%d", sumD);
}