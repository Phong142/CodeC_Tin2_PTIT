#include <stdio.h>

#include <string.h>

void demsotutrongxau(char s[]) {
    int sotu = 0;
    int len = strlen(s);
    for (int i = 0; i < len - 1; i++) {
        if (s[i] == ' ' && s[i + 1] != ' ')
            sotu++;
    }
    if (s[0] != ' ')
        sotu++;
    printf("%d", sotu);
}
int main() {
    int test;
    scanf("%d\n", & test);
    while(test--) {
        char chuoi[1001];
        gets(chuoi);
        demsotutrongxau(chuoi);
        printf("\n");
    }
}