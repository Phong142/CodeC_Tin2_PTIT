#include <stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	for(int an=1; an<=test; an++){
		int n,m;
		scanf("%d%d", &n, &m);
		int k;
		scanf("%d", &k);
		int a[101], b[101];
		for(int i=0; i<n; i++)
			scanf("%d", &a[i]);
		for(int i=0; i<m; i++)
			scanf("%d", &b[i]);
		printf("Test %d: \n", an);
		for(int i=0; i<k; i++)
			printf("%d ", a[i]);
		for(int i=0; i<m; i++)
			printf("%d ", b[i]);
		for(int i=k; i<n; i++)
			printf("%d ", a[i]);
		printf("\n");
	}
}

