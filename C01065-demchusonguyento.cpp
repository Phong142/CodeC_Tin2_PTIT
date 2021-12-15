#include <stdio.h>
#include <string.h>

int main(){
	char s[11];
	gets(s);
	int a[11]={};
	for(int i=0; i<strlen(s); i++){
		int count=0;
		if(a[i]==0){
			if(s[i]-'0'==2 || s[i]-'0'==3 ||  s[i]-'0'==5 || s[i]-'0'==7){
				count=1;
				a[i]=1;
				for(int j=i+1; j<strlen(s); j++){
					if(s[i]==s[j]){
						a[j]=1;
						count++;
					}
				}
			}
		}
		if(count!=0)	
			printf("%d %d\n", s[i]-'0', count);
	}
}