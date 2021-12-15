#include <stdio.h>
#include <math.h>

int main () {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= 2*n - 1; i++){
		for (int j = 1; j <= 2*n - 1; j++){
			int gi = abs(n - i);
			int gj = abs(n - j);
			if (gi > gj) 
				printf("%d",gi+1);
			else 
				printf("%d", gj+1); 
		}
		printf("\n");
	}	
}