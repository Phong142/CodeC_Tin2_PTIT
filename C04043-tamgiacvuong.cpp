#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, a[50001], h = 0;
		scanf("%lld", &n);
		for(long long i = 0;i < n;i++){
			scanf("%lld", &a[i]);
		}
		for(long long i = 0; i <n-1;i++){
			for(long long j = i+1; j <n;j++){
				if(a[i] > a[j]){
					long long tmp = a[i];
							  a[i] = a[j];
							  a[j] = tmp;
				}
			}
		}
		int x= 0, z = n-1, y = z-1;
		while(y != 0 && a[x]*a[x] + a[y]*a[y] != a[z]*a[z]){
			if(a[x]*a[x] + a[y]*a[y] > a[z]*a[z]) y--;
			else x++;
			if(x == y){
				z--;
				y = z-1;
				x=0;
			}
		}
		if(a[x]*a[x] + a[y]*a[y] == a[z]*a[z]) printf("YES\n");
		else printf("NO\n");  
	}
}