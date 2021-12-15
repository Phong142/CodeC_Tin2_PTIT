#include <stdio.h> //void Swap(int *x, int *y){

//   int tmp=x; 
//    x=y;
//   y=tmp;
//}
void Xuat(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}

void SapXep(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int mini=i;

        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[mini]) 
            mini=j;
        }

        printf("Buoc %d: ", i+1);
        int tmp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=tmp;
        Xuat(arr, n);
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[101];
    for(int i=0; i<n; i++) 
    scanf("%d", &a[i]);
    SapXep(a, n);
}