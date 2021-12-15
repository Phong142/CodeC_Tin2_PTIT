#include<stdio.h>

void swap(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}
int main() {
	int t;
	scanf("%d", &t);
	int h = t;
	while( t-- ){
		int a, b;
		scanf("%d %d", &a, &b);
		int x[a][b];
		for(int i = 0 ; i < a ; i ++ ){
			for(int j = 0 ; j < b ; j ++ ){
				scanf("%d",&x[i][j]);			
			}
		}
		for(int i = 0 ; i < a ; i ++ ){
			for(int j = 0 ; j < b ; j ++ ){
				for(int m = i ; m < a ; m ++ ){
					for(int n = j ; n < b ; n ++ ){
						if(x[i][j]>x[m][n]){
							swap(&x[i][j],&x[m][n]);
						}
					}
				}
			}
		}
		printf("Test %d:\n", h-t);
		for(int i = 0 ; i < a ; i ++){
			for(int j = 0 ; j < b ; j ++){
				printf("%d ",x[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}