#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[80];
		gets(s);
		int len = strlen(s);
		int k = 0;
		int a[80] = {};
		if(s[0] != ' '){
			a[k] = 0;
			k++;
		}
		for(int i = 1; i < len; i++){
			if( s[i] != ' ' && s[i-1] == ' '){
				a[k] = i;
				k++;
			}
		}
		int q=1;
		for(int i = a[0]; i < len;i++){
			if(i == a[0]){
				if(s[i] >= 'a' && s[i] <= 'z') printf("%c", s[i]-32);
				else printf("%c", s[i]);
			}
			else if(i == a[q]){
				if(s[i] >= 'a' && s[i] <= 'z') printf(" %c", s[i]-32);
				else printf(" %c", s[i]);
				q++;
			}
			else if(s[i] >= 'A' && s[i] <= 'Z') printf("%c", s[i]+32);
			else if(s[i] >= 'a' && s[i] <= 'z') printf("%c", s[i]);
		}
		printf("\n");
	}
}

// #include<stdio.h>
// #include<string.h>
// int main(){
// 	int t;
// 	scanf("%d",&t);
// 	while (t--){
// 		char s[1000],ds[100][100];
// 		int n=0,d2=0,d3;
// 		scanf("\n");
// 		gets(s);
// 		char *p=strtok(s," ");
// 		while (p!=NULL){
// 			for (int i=0; i<strlen(p);i++) if(p[i]>='A' && p[i]<='Z') p[i]+=32;
// 			p[0]-=32;
// 			strcpy(ds[n++],p);
// 			p=strtok(NULL," ");
// 		}
// 		for (int i=0; i<n; i++) printf("%s ",ds[i]);
// 		printf("\n");
// 	}
// }