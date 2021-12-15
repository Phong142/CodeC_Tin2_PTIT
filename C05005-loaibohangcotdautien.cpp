#include <stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	for(int k=1; k<=test; k++){
		int m,n;
		scanf("%d%d", &m, &n);
		int a[100][100];
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", k);
		for(int i=0; i<m; i++){
			if(i==0)
				continue;
			for(int j=0; j<n; j++){
				if(j==0)
					continue;
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}

