#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int m;
        scanf("%d", &m);
        char a[105][105] = {};
        for(int i = 0; i < m;i++) scanf("%s", &a[i]);
        for(int i = 0;i < m-1;i++){
            char x1[105], x2[105];
            for(int j = i+1;j < m;j++){
                strcpy(x1, a[i]);
                strcat(x1, a[j]);
                strcpy(x2, a[j]);
                strcat(x2, a[i]);
                if(strcmp(x1, x2) > 0){
                    strcpy(x1,a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], x1);
                }
            }
        }
        for(int i = 0; i < m;i++) printf("%s", a[i]);
        printf("\n");
    }
}