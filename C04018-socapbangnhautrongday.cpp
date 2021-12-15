#include<stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, a[100], check[100]={0}, count = 0, soLan = 0;
		scanf("%d", &n);
		for(int i = 0; i < n;i++) scanf("%d", &a[i]);
		for(int i = 0; i < n;i++){
			if(check[i] != 0) continue;
			else{
				check[i];
				for(int j = i+1; j < n;j++){
					if(a[i] == a[j]&& j == i+1){
						soLan++;
						check[j];
					}
				}
			}
		}
			printf("%d\n", soLan);
		
	}
}