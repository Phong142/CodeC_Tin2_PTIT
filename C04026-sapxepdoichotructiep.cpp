#include <stdio.h>

// void Swap(int *a, int *b) {
//     int tmp = a;
//     a = b;
//     b = tmp;
// }
void In(int ar[], int n) {
    for (int i = 0; i < n; i++)
    printf("%d ", ar[i]);
}
void SapXep(int ar[], int n) {
    for (int i = 0; i <n - 1; i++) {
        printf("Buoc %d: ", i+1);
        for (int j = i + 1; j < n; j++) {
            if (ar[i] > ar[j]){
                int tmp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = tmp;
            }
        }
        In(ar, n);
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", & n);
    int a[101];
    for (int i = 0; i < n; i++) 
    scanf("%d", & a[i]);
    SapXep(a, n);
}