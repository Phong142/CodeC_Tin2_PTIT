#include <stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int a[101];
        for(int i=0; i<n; ++i)
            scanf("%d", &a[i]);
        int max=a[0];
        for(int i=0; i<n; ++i){
            if(max<=a[i])
                max=a[i];
        }
        printf("%d\n", max);
        for(int i=0; i<n; ++i){
            if(a[i]==max)
                printf("%d ", i);
        }
        printf("\n");
    }
}
