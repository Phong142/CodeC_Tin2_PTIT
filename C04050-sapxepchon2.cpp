#include<stdio.h>
int main(){
	int n, a[100], dem = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < n-1;i++){
		int min = i;
		for(int j = i + 1; j < n; j++)
			if(a[min] > a[j] )min = j;
				int tmp = a[i];
					a[i] = a[min];
					a[min] = tmp;
					dem++;
		if(dem){
			for(int i = 0; i < n; i++) printf("%d ", a[i]);
			printf("\n");
		}
	}
}