#include <stdio.h>

long long UCLN(long long a, long long b) {
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
int main() {
    int test;
    scanf("%d", & test);
    while (test--) {
        long long a, b;
        scanf("%lld%lld", & a, & b);
        printf("%lld\n", UCLN(a, b));
    }
}
