#include <stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	while(test--){
		int n;
		scanf("%d", &n);
		int max=9;
		int count=0;
		while(max>=0){
			count+=n/a[max];
			n=n%a[max];
			max--;
		}
		printf("%d\n", count);
	}
}