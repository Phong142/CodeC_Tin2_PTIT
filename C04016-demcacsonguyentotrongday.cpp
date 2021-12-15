#include<stdio.h>

#include<math.h>

#include<string.h>

int kt(long long n) {
    if (n < 2) return 0;
    for (long long i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}
int main() {
    long long t, m;
    scanf("%lld", & t);
    m-t;
    while (t--) {
        long long n;
        scanf("%lld", & n);
        long long a[n], b[10000] = {};
        for (long long i = 0; i < n; i++) {
            scanf("%lld", & a[i]);
            b[a[i]]++;
        }
        printf("Test %lld:\n", m - t);
        for (long long i = 0; i < 1000; i++) {
            if (b[i] > 0 && kt(i) == 1)
                printf("%lld xuat hien %lld lan\n", i, b[i]);
            b[i] = 0;
        }
    }
    return 0;
}