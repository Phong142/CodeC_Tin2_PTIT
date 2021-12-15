#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[10001];
    int sum=0;
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%.3f", sum*1.0/n);
}