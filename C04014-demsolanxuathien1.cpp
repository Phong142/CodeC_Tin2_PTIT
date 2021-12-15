#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[10001];
	int check[10001]={};
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(int i=0; i<n; i++){
		if(check[i]!=0)
			continue;
		else{
			check[i]++;
			int solan=1;
			for(int j=i+1; j<n; j++){
				if(a[i]==a[j]){
					solan++;
					check[j]++;
				}
			}
			printf("%d %d\n", a[i], solan);
		}
	}
}

