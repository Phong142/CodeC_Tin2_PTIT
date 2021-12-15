#include <stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	while(test--){
	int n,m;
	scanf("%d%d", &n, &m);
	int mt[101][101];
//	int mtt[101][101];
	int ar[10001];
	int cout=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &mt[i][j]);
			ar[cout++]=mt[i][j];
		}
	}
	int dem = 0, max = n*m;
	int d=0, hang=n-1, cot=m-1;
	int count=0;
	while(d<=n/2 ){
		for(int i=d; i<=cot; i++){
			printf("%d ", mt[d][i]);
			dem++;
		}
		if(dem == max) break;
		for(int i=d+1; i<=hang; i++) {
			printf("%d ", mt[i][cot]);
			dem++;
		}
		if(dem == max) break;
		for(int i=cot-1; i>=d; i--){
			printf("%d ", mt[hang][i]);
			dem++;
		}
		if(dem == max) break;
		for(int i=hang-1; i>=d+1; i--){
			printf("%d ", mt[i][d]);
			dem++;
		}
		if(dem == max) break;
		d++; hang--; cot--;
	}
	printf("\n");
	}
}