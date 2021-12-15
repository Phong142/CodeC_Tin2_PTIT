#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = 0; i < a;i++){
		for(int j = 0; j < b;j++){
			if(i == a-1) printf("%c", 65+j);
			else if(j == 0 && i >=(a-b)) printf("%c", 65+a-1-i);
			else if( i >=(a-b) && (i-j) >= (a-b)) printf("%c", (65+a-1)-(i-j));
			else printf("%c", 65+b-1);
		}
		printf("\n");
	}
}