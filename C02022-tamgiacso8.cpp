#include<stdio.h>

int main(){
	int n, m =0;
	scanf("%d", &n);
	for(int i = 1;i <= n;i++){
		int a = m, b = 0;
		if(i % 2 != 0 ){
			while(b < i){
			a++;
			printf("%d ", a);
			b++; m++;
		    }
		}
		else{
			m += i;
			a = m;
			while(i > b ){
				printf("%d ", a);
				a--; b++;
			}
		}
		printf("\n");
	}
}