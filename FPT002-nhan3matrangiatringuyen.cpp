#include<stdio.h>

int main() {
    int m, n, p, q;
    scanf("%d %d %d %d", & m, & n, & p, & q);
    int x[45][45];
    int y[45][45];
    int z[45][45];
    int t[45][45];
    int w[45][45];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", & x[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", & y[i][j]);
        }
    }
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", & z[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < p; k++) {
                t[i][k] += x[i][j] * y[j][k];
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < q; k++) {
                w[i][k] += t[i][j] * z[j][k];
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", w[i][j]);
//            w[i][j] = 0;
        }
        printf("\n");
    }
}