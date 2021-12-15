#include <stdio.h>
#include <string.h> 

int main () {
    char str[10000], x[10000];
    gets (str); 
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i]) >= 'a' && (str[i] <= 'z'))
            x[i]= str[i] - 32;
        else 
            x[i] = str[i];
    }
    puts(x); 
 }
