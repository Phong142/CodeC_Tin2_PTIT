#include <stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		double n;
		scanf("%lf", &n);
		printf("%.15lf\n", 1/n);
	}
}

