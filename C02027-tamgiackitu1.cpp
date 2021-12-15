#include<stdio.h>

#include<string.h>

int main() {
    int n;
    char m = 96;
    scanf("%d", & n);
    for (int i = 1; i <= n; i++) {
        char a = m;
        int b = 0;
        if (i % 2 != 0) {
            while (b < i) {
                a++;
                printf("%c ", a);
                b++;
                m++;
            }
        } else {
            m += i;
            a = m;
            while (i > b) {
                printf("%c ", a);
                a--;
                b++;
            }
        }
        printf("\n");
    }
}