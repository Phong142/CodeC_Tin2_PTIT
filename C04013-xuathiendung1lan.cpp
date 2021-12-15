#include <stdio.h>

int dd[1001];
int main(){
    int n;
    scanf("%d", &n);
    int a[1001];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        dd[a[i]]++;
    }
    int count=0;
    for(int i=0; i<n; i++)
        if(dd[a[i]]==1)
            count++;  
    printf("%d\n", count); 
    for(int i=0; i<n; i++)
        if(dd[a[i]]==1)
            printf("%d ", a[i]);
}