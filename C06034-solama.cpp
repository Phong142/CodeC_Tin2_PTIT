#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		int a[20], i;
		char s[20];
		gets(s);
		int len = strlen(s);
		for(i = 0; i < len;i++){
			if(s[i] == 'I') a[i] = 1;
			else if(s[i] == 'V') a[i] = 5;
			else if(s[i] == 'X') a[i] = 10;
			else if(s[i] == 'L') a[i] = 50;
			else if(s[i] == 'C') a[i] = 100;
			else if(s[i] == 'D') a[i] = 500;
			else if(s[i] == 'M') a[i] = 1000;
		}
		int k = a[len-1];
		for( i = len-1;i >0;i--){
			if(a[i] > a[i-1]) k -= a[i-1];
			else if(a[i] == a[i-1] || a[i] < a[i-1]) k += a[i-1];
		}
		printf("%d\n", k);
	}
}