#include <stdio.h>

void In(int a[], int n){
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
}
void SapXep(int a[], int n){
    for(int i=0; i<n; i++){
        int check=0;
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                check=1;
            }
        }
        if(check==1){
            printf("Buoc %d: ", i+1);
            In (a, n);
            printf("\n");
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int a[101];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    SapXep(a, n);    
}