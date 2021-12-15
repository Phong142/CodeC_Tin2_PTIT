#include <stdio.h>

int main(){
	char s[10];
	gets(s);
	if(s[0]-'0'+s[4]-'0'==s[8]-'0')
		printf("YES");
	else
		printf("NO");
}

