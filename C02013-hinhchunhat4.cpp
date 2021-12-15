#include <stdio.h>
int main () {
	int i, j, a, b, m, n, temp;
	scanf("%d %d", &a, &b);
	m=a; n=b; 
	if (a>b) { temp=a; a=b; b=temp;}
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			if ((b-i-j)>0 || (i==0 && j==0) ) printf("%d", b-i-j);
			if ((b-i-j)<=0 && i!=0) printf("%d", i+j+2-b);
			}
		printf("\n");
	}
	return 0;
}