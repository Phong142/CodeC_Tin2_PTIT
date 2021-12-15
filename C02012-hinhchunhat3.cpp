#include<stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++){
        int x=i;
        for(int j=1;j<=b;j++){
            if(j<=i-1)printf("%d",x--);
            else printf("%d",x++);
        }printf("\n");
    }
}