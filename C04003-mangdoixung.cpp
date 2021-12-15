#include <stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		int a[101];
		int check=1;
		for(int i=0; i<n; i++)
			scanf("%d", &a[i]);
		for(int i=0; i<n/2; i++){
			if(a[i]!=a[n-i-1]){
				check=0;
				break;
			}
		}
		if(check==1)
			printf("YES\n");
		else printf("NO\n");	
	}
}

