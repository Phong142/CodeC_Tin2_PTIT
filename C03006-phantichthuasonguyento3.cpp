#include <stdio.h>
#include <math.h>

int main() {
    int test;
    scanf("%d", &test);
    for(int k=1; k<=test; k++) {
        int n;
        scanf("%d", &n);
        printf("Test %d: ", k);
        for (int i = 2; i <= n; i++) {
            int count = 0;
            while (n % i == 0) {
                count++;
                n /= i;
            }
            if (count != 0)
                printf("%d(%d) ", i, count);
        }
        printf("\n");
    }
}