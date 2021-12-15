#include <stdio.h>
#include <math.h>

int main(){
    int n; 
    scanf("%d", &n);
    int a[1001];
    int sl=0;
    for(int i=2; i<=n; i++){
        while(n%i==0){
            a[sl++]=i;
            n/=i;
        }
    }
    for(int i=0; i<sl-1; i++)
        printf("%dx", a[i]);
    for(int i=sl-1; i<sl; i++)
        printf("%d", a[i]);
}
