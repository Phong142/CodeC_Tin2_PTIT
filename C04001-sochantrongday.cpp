#include <stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n; 
		scanf("%d", &n);
		int a[1001];
		for(int i=0; i<n; i++)
			scanf("%d", &a[i]);
		for(int i=0; i<n; i++){
			if(a[i]%2==0)	printf("%d ", a[i]);
		}
		printf("\n");
	}
}

