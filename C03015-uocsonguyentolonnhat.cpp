#include <stdio.h>

#include <math.h>

int nTo(long a) {
    if (a < 2)
        return 0;
    for (long i = 2; i <= sqrt(a); i++) {
        if (a % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n;
    long tmp;
    scanf("%d", & n);
    for (int j = 0; j < n; j++) {
        scanf("%ld", & tmp);
        for (long k=tmp; k > 0;) {
            if (nTo(k) == 1) {
                printf("%ld\n", k);
                break;
            }
            for (long i = 2; i <= sqrt(k); i++) {
                if (k % i == 0) {
                    k = k / i;
                    break;
                }
            }
        }
    }
}