#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int mt[101][101];
	int ar[n*n];
	int cout=0;
	for(int i=1; i<=n*n; i++){
		ar[cout++]=i;
	}
	int d=0, hang=n-1, cot=n-1;
	int count=0;
	while(d<=n/2){
		for(int i=d; i<=cot; i++) mt[d][i]=ar[count++];
		for(int i=d+1; i<=hang; i++) mt[i][cot]=ar[count++];
		for(int i=cot-1; i>=d; i--) mt[hang][i]=ar[count++];
		for(int i=hang-1; i>=d+1; i--) mt[i][d]=ar[count++];
		d++; hang--; cot--;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", mt[i][j]);
		}
		printf("\n");
	}
}

