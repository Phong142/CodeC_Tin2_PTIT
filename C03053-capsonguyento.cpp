#include<stdio.h>

#include<math.h>

int snt(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main() {
	int t, n, i;
	scanf("%d", & t);
	while (t--) {
		scanf("%d", & n);
		for (i = 2; i <= n / 2; i++) {
			if (snt(i) == 1 && snt(n - i) == 1) printf("%d %d ", i, n - i);

		}
		printf("\n");

	}

}