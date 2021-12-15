#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1 ; i <= n; i++){
        for (int j = 1; j <= 2*n-1; j++){
            int gi = abs(n - i);
            int gj = abs(n - j);
            int x = n - gi - gj;
            if (x < 1 &&j < n)
                printf("~");
            else if (x>0)
                printf("%d",2*x -1);
			else 
				printf("");
        }
            printf("\n");
    }
}
