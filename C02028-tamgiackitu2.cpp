#include<stdio.h>
#include<string.h>

int main(){
	int n, k =2;
	scanf("%d", &n);
	char b = 64;
	char c = b;
	for(int i = 1; i <= 2*n-1; i += 2){
		b+=i;
		for(int j = 2*n-1;j >= i;j -= 2){
			printf("%c", b);
			b += 2;
		}
		b = 64;
		printf("\n");
	}
}