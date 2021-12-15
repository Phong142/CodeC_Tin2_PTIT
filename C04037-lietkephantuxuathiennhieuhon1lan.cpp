#include <stdio.h>

int dd[10001]={0}, dd2[10001]={0};
int main(){
    int n;
    scanf("%d", &n);
    int a[1001];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    int count=0;
    for(int i=0; i<n; i++){
        dd[a[i]]++;
        if(dd[a[i]]==2)
            count++;  
    }
    printf("%d\n", count); 
    for(int i=0; i<n; i++){
        dd2[a[i]]++;
        if(dd[a[i]]>=2 && dd2[a[i]]==1)
            printf("%d ", a[i]);
    }
}