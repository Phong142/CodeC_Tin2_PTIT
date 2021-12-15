#include <stdio.h>

#include <string.h>

int main() {
    int test;
    scanf("%d", & test);
    while (test--) {
        char s[505];
        scanf("%s", & s);
        for (int i = 0; i < strlen(s); i++) {
            int chuso = 0;
            if ((s[0]-'0') != 8 || (s[strlen(s)-i-1]-'0') != 8) { 
                printf("NO\n");
                break;
            } else {
                if ((s[i]-'0') != (s[strlen(s)-i-1]-'0')) {
                    printf("NO\n");
                    break;
                } else {
                    for (int j = 0; j < strlen(s); j++)
                        chuso += s[j]-'0';
                    if (chuso % 10 == 0){
                        printf("YES\n");
                        break;
                    }
                }
            }
        }
    }
}