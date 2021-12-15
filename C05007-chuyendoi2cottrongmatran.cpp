#include <stdio.h>

int main(){
	int m,n;
	scanf("%d%d",&m, &n);
	int mt1[101][101];
	int mt2[101][101];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &mt1[i][j]);
		}
	}
	int b,c;
	scanf("%d%d", &b, &c);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(j==b-1)
				mt2[i][j]=mt1[i][c-1];
			else if(j==c-1)
				mt2[i][j]=mt1[i][b-1];
			else 
				mt2[i][j]=mt1[i][j];
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d ", mt2[i][j]);
		}
		printf("\n");
	}
}

