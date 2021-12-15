#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[1001];
	int b[1001]={};
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i< n;i++){
		b[a[i]]++;
		if(b[a[i]]==1) printf("%d ", a[i]); 
	}
}