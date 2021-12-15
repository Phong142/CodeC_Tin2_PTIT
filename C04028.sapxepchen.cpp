#include<stdio.h>

int main(){
	int n, a[100];
	scanf("%d", &n);
	for(int i = 0; i < n;i++) scanf("%d", &a[i]);
	for(int i = 0; i < n;i++){
		printf("Buoc %d: ", i);
		if( i == 0) printf("%d", a[0]);
		else{
			for(int j = 0; j <= i;j++){
				for(int k = j+1; k <= i;k++){
					if(a[j] > a[k]){
						int tmp = a[j];
							a[j] = a[k];
							a[k] = tmp;
					}
				}
			}
		for(int k = 0; k <= i;k++) printf("%d ", a[k]);
		}
		printf("\n");
	}
}