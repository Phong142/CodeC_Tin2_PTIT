#include <stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int spt;
        scanf("%d", &spt);
        int arr[101];
        int count=0;
        for(int i=0; i<spt; i++)
            scanf("%d", &arr[i]);
        int max=arr[0];
        for(int i=0; i<spt; i++){
            if(arr[i]>=max){
                max=arr[i];
                count++;
            }
        }
        printf("%d\n", count);
    }
}
