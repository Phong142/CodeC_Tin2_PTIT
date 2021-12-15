#include<stdio.h>

int main(){
	int t;
	scanf("%d\n",&t);
	int h=t;
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int x[100][100];
		int y[100][100];
		int z[100][100];
		for(int i = 0 ; i < a ; i ++){
			for (int j = 0 ; j < b ; j ++){
				scanf("%d",&x[i][j]);
			}
		}
		printf("Test %d:\n",h-t);
		//chuyen vi
		for(int i = 0 ; i < a ; i ++){
			for (int j = 0 ; j < b ; j ++){
				y[j][i] = x[i][j];
			}
		}
		for(int i = 0 ; i < a ; i ++){
			for (int j = 0 ; j < a ; j ++){
				for ( int k = 0 ; k < b ; k ++){
					z[i][j]+=x[i][k]*y[k][j];
				}
			}
		}
		for(int i = 0 ; i < a ; i ++){
			for (int j = 0 ; j < a ; j ++){
				printf("%d ",z[i][j]);
				z[i][j] = 0;
			}
			printf("\n");
		}
	}
	return 0;
}