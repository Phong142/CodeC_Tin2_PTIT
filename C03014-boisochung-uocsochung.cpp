#include <stdio.h>

long long UCLN(int a, int b){
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}
// int BCNN(int a, int b){
//     int min=UCLN(a,b);
//     return a*b/min;
// }
int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int a,b;
        scanf("%d%d", &a, &b);
        long long min=a*b/UCLN(a,b);
            printf("%lld", min);
            printf(" ");
        long long max=UCLN(a,b);
            printf("%lld", max);
            printf("\n");
    }
}