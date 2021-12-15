#include<stdio.h>

int main(){
	int t;
	scanf("%d\n",&t);
	int h=t;
	while(t--){
		int a;
		scanf("%d",&a);
		int x[100][100];
		int y[100][100];
		int z[100][100];
		for(int i = 1 ; i <= a ; i ++){
			int count = 1;
			for (int j = 1 ; j <= a ; j ++){
				if(j > i) x[i][j] = 0;
				else{ x[i][j] = count;
				count++;
				}
			}
		}
		printf("Test %d:\n",h-t);
		for(int i = 1 ; i <= a ; i ++){
			for (int j = 1 ; j <= a ; j ++){
				y[j][i] = x[i][j];
			}
		}
		for(int i = 1 ; i <= a ; i ++){
			for (int j = 1 ; j <= a ; j ++){
				for ( int k = 1 ; k <= a ; k ++){
					z[i][j]+=x[i][k]*y[k][j];
				}
			}
		}
		for(int i = 1 ; i <= a ; i ++){
			for (int j = 1 ; j <= a ; j ++){
				printf("%d ",z[i][j]);
				z[i][j] = 0;
			}
			printf("\n");
		}
	}
	return 0;
}