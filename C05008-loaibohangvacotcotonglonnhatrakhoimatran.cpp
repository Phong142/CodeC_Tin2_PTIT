#include<stdio.h>
int main(){
	int t; 
	scanf("%d", &t);
	int h = t;
	while(t--){
		int m, n, x[10][10], y[10][10], z[10][10];
		scanf("%d%d", &m, &n);
		for(int i = 1 ; i <= m ; i ++){
			for(int j = 1 ; j <= n ; j ++ ){
				scanf("%d",&x[i][j]);
			}
		}
		int dem = 0;
		int dau = 0;
		for(int i = 1 ; i <= m ; i ++){
			int sum = 0;
			for(int j = 1 ; j <= n ; j ++ ) sum += x[i][j];
			if( dem < sum){
				dem = sum;
				dau = i;
			}
		}
		int a = 1;
		for(int i = 1; i <= m;i++){
			if(dau != i){
			for(int j = 1; j <=n;j++){
				y[a][j] = x[i][j];
				} a++;
			}
		}
		dem = 0, dau = 0;
		for(int j = 1; j <=n;j++){
			int sum = 0;
			for(int i = 1;i <m;i++) sum += y[i][j];
			if( dem < sum){
				dem = sum;
				dau = j;
			}
		}
		for(int i = 1; i < m;i++){
			int a = 1;
			for(int j = 1;j <= n;j++){
				if(dau != j){
					z[i][a] = y[i][j];
					a++;
				}
			}
		}
		printf("Test %d:\n", h-t);
		for(int i = 1; i < m;i++){
			for(int j = 1; j <n;j++){
				printf("%d ", z[i][j]);
			}
			printf("\n");
		}
				
	}
}