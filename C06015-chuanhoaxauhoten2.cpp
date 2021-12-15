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
		for(int i = a[q]; i < len;i++){
		/*	if(i == a[0]){
				if(s[i] >= 'a' && s[i] <= 'z') printf("%c", s[i]-32);
				else printf("%c", s[i]);
			}*/
			if(i == a[q]){
				if(s[i] >= 'a' && s[i] <= 'z') printf("%c", s[i]-32);
				else printf("%c", s[i]);
			}
			else if(i == a[q+1]){
				if(s[i] >= 'a' && s[i] <= 'z') printf(" %c", s[i]-32);
				else printf(" %c", s[i]);
				q++;
			}
			else if(s[i] >= 'A' && s[i] <= 'Z') printf("%c", s[i]+32);
			else if(s[i] >= 'a' && s[i] <= 'z') printf("%c", s[i]);
		}
		printf(", ");
		for(int i = a[0]; i < a[1];i++){
			if(s[i] >= 'a' && s[i] <= 'z') printf("%c", s[i] -32);
			else if(s[i] >= 'A' && s[i] <= 'Z') printf("%c", s[i]);
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
// 		char b[100],a[100];
// 		int d1=0,d2=0,d3=0;
// 		scanf("\n");
// 		gets(b);
// 		for (int i=0; i<strlen(b); i++){
// 			if(b[i]>64 && b[i]<91) b[i]+=32;
// 			if(b[i]==' ' && b[i+1]!=' ' && i!=strlen(b)-1){
// 				if(d2!=0){
// 					a[d2]=' ';
// 					d1++;
// 					d2++;
// 					if (d1==1) d3=d2;
// 				}
// 			}
// 			if (b[i]!=' '){
// 				a[d2]=b[i];
// 				d2++;
// 			}
// 		}
// 		a[d3]-=32;
// 		for (int i=d3; i<d2; i++){
// 			if(a[i]==' ') {
// 				if( a[i+1]>96 && a[i+1]<123 ) a[i+1]-=32;
// 				else a[i+2]-=32;
// 			}
// 			printf("%c",a[i]);
// 		}
// 		printf(", ");
// 		for (int i=0; i<d3 ; i++){
// 			if( a[i]>96 && a[i]<123 ){
// 			a[i]-=32;
// 			printf("%c",a[i]);
// 				}
// 		}
// 		printf("\n");
// 	}
// }