#include<stdio.h>

int main(){
	int n, m =0;
	scanf("%d", &n);
	for(int i = 1;i <= n;i++){
		char a = n-1;
		char b = 64+i;
		for(int j = 1; j <= i;j++){
			printf("%c ", b);
			b += a;
			a--;
		}
		printf("\n");
	}
}