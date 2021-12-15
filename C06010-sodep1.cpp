#include <stdio.h>
#include <string.h>

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        char s[505];
        scanf("%s", &s);
        int count=0;
        for(int i=0; i<=strlen(s); i++){
            if((s[i]-'0')%2 != 0){
                count=0;
                break;
            }
            else
                count++;
        }
        if(count==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
}
