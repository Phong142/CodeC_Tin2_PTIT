#include <stdio.h>
#include <string.h> 

int main () {
	int test;
	scanf("%d",&test);
	while(test--){
	    char str[3], x[3];
	    scanf("%s", &str); 
	    int i = 0;
		if ((str[i]) >= 'a' && (str[i] <= 'z'))
			x[i]= str[i] - 32; 	 
		else if ((str[i]) >= 'A' && (str[i] <= 'Z'))
			x[i] = str[i] + 32 ;
		else 
			x[i] = str[i];
    	puts(x); 
	}
 }