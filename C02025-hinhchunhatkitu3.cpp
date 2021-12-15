#include <stdio.h>
int main ()
{
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for (i=0; i<a; i++) {
		for (j=0; j<b; j++) {
			if (i==0) printf("%c", 64+j);
			else if (j==0 &&i<b) printf ("%c", 64+i);
			else if(i+j<b) printf("%c", 64+i+j);
			else printf("%c",64+b-1);
		}
		printf("\n");
	}
	return 0;
}