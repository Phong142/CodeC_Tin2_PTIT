#include<stdio.h>
int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	int dau = 0;
	for(int i =2 ; i <= n;i++){
		int t = i;
		while(t % 2 == 0){
			k--;
			t /= 2;
		}
		if(k < 1){
			dau++;
			break;
		}
	}
	if(dau) printf("Yes");
	else printf("No");
}