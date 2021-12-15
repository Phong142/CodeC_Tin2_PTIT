#include <stdio.h>

int main(){
    int test;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		long long a[n];
		for (int i = 0; i < n; i++) 
		    scanf("%lld", &a[i]);
		int id, check = 1;
        int i = 0;
        while (i < n - 1 && check){
        	for (int j = i + 1; j < n; j++){
        		if (a[i] == a[j]) {
        			check = 0;
        			id = i;
				}
			}
			i++;
		}
		if (!check) 
			printf("%d\n",  a[id]);
		else 
            printf("NO\n");
	}
	return 0;
}