#include <stdio.h>
#include <string.h>
int main(){
	char s[1000],x[1000];	
	gets(s);int a=strlen(s);
	gets(x);int b=strlen(x);
	int n; 
	scanf("%d",&n);
	for(int i=0;i<n-1;i++) printf("%c",s[i]);
	for(int i=0;i<b;i++) printf("%c",x[i]);
	for(int i=n-1;i<a;i++) printf("%c",s[i]);
	return 0;
}