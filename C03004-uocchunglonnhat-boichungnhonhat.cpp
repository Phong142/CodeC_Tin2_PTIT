#include <stdio.h>

long long UCLN(long long a, long long b){
    while(a!=b){
    if(a>b)
        a=a-b;
    else
        b=b-a;
    }
    return a;
}
int main(){
    long long a,b;
    scanf("%lld%lld", &a, &b);
    printf("%lld\n", UCLN(a,b));
    printf("%lld", a*b/UCLN(a,b));
}