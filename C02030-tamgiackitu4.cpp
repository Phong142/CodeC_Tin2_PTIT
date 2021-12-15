#include<stdio.h>

int main(){
	int n, k;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
			
		for(int  j = 1; j <= 2*i-1; j += 2){
			char gtri = 63+j;
			printf("%c", gtri);
		}
		for(int j = (i-1)*2-1; j >= 1;j -= 2){
			char gtri = 63+j;
			printf("%c", gtri);
		}
		printf("\n");
	}
}