#include<stdio.h>

void quicksort(int a[], int n, int m){
    int x = n, y = m;
    int key = a[(n+m)/2];
    while(x <= y){
        while(a[x] < key) x++;
        while(a[y] > key) y--;
        if(x <= y){
            int tmp = a[x];
                a[x] = a[y];
                a[y] = tmp;
                x++; y--;
        }
    }

    if ( x < m) quicksort(a, x, m);
    if ( y > n) quicksort(a, n, y);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, c = 1;
        scanf("%d", &n);
        int a[100000];
        long long min = 999999999;
        for(int i = 0; i < n;i++) scanf("%d", &a[i]);
        quicksort(a, 0, n-1);
        for(int i = 0; i < n-1;i++){
            if(a[i+1] -a[i] < min){
                min = a[i+1] - a[i];
                c = 1;
            }
            else if(a[i+1]- a[i] == min) c++;
        }
        printf("%lld %d\n", min, c);
    }
}