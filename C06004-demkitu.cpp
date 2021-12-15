#include <stdio.h>
#include <string.h>

int main(){
	char s[10001];
	gets(s);
	int chu=0, so=0;
	for(int i=0; i<strlen(s); i++){
		if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
			chu++;
		if(s[i]>='0' && s[i]<='9')
			so++;
	}
	int khac=strlen(s)-chu-so;
	printf("%d %d %d", chu, so ,khac);
}

