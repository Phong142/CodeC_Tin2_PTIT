#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d",&a, &b);
    for(int i=1; i<=a; i++){
        if(i<=b){
            for(int j=i; j<=b; j++) 
                printf("%c", j+65-1);
            for(int j=i-1; j>0; j--) 
                printf("%c", j+65-1);
            printf("\n");
        }
        else{
            for(int j=b; j>0; j--)
                printf("%c", j+65-1);
            printf("\n");
        }
    }
}