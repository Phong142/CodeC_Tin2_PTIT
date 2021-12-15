#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[101];
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1-i; j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	printf("%d ",a[0]);
    for (int i = 1; i < n; i++)
        if (a[i] > a[0]){
            printf("%d", a[i]);
            break;
        }
}

