#include <stdio.h>

int main() {
	long long a;
	int test;
	scanf("%d", & test);
	while (test--) {
		scanf("%lld", & a);
		printf("%lld\n", a * a);
	}
}	