#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool scp(int n) {
    int sqr = sqrt(n);
    return (sqr * sqr == n);
}

void uoc(int n) {
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i % 2 == 0 && (n / i) % 2 == 0) cnt += 2;
            else if (i % 2 == 0 || (n / i) % 2 == 0) cnt++;
            else cnt = cnt;
        }
    }
    if (scp(n))
        printf("%d", cnt - 1);
    else printf("%d", cnt);
}

int main() {
    int test;
    scanf("%d", & test);
    while (test--) {
        int n;
        scanf("%d", & n);
        if (n % 2 == 1) printf("0");
        else uoc(n);
        printf("\n");
    }
}