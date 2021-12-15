#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[101];
	for(int i=1; i<=n; i++)
		scanf("%d", &a[i]);
	for(int i=n; i>0; i--){
		printf("%d ", a[i]);
	}
}

