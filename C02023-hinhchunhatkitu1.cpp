#include<stdio.h>

int main(){
	int a, b, max;
	scanf("%d%d", &a, &b);
	if( a > b) max = a;
	else max = b;
	for(int i = 1; i <= a;i++){
		int x = max + 'a'-1;
		for( int j = 1; j <= b;j++){
			if( j < i) printf("%c", x--);
			else printf("%c", x);
		}
		printf("\n");
	}
}