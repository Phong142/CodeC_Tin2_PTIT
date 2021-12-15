#include<stdio.h>

int main() {
    int P, Q, dem = 0;
    scanf("%d%d", & P, & Q);
    for (int a = P; a <= Q; a++) {
        for (int b = a + 1; b <= Q; b++) {
            for (int i = 1; i <= a; i++) {
                if (a % i == 0 && b % i == 0) dem++;
            }
            if (dem == 1) printf("(%d,%d)", a, b);
            dem = 0;
            printf("\n");
        }
    }
}

// #include<stdio.h>
// int ucln (int a, int b) {
// //	if (a==0 || b==0) return a+b;
// 	while (a!=b) {
// 		if (a>b) a-=b;
// 		else b-=a;
// 	}
// 	return a;
// }
// int main () {
// 	int a, b, i, j;
// 	scanf("%d %d", &a, &b);
// 	for (i=a; i<=b-1; i++) {
// 		for (j=i+1; j<=b; j++) {
// 			if (ucln(i, j)==1) printf("(%d,%d)\n", i, j);
// 		}
// 	}
// 	return 0;
	
// }