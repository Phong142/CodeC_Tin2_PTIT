#include<stdio.h>
#include<string.h>
int main(){
		char s[50];
		gets(s);
		int len = strlen(s);
		int k = 0;
		int a[50] = {};
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
		int q=0;
		for(int i = a[q]; i< a[k-1];i++){
			if(i == a[q]){
			 if( s[i] >= 'A' && s[i] <= 'Z') printf("%c", s[i]+32);
			 else if(s[i] >= 'a' && s[i] <= 'z') printf("%c", s[i]);
			 q++;
		}
	}
		for(int i = a[k-1]; i < len;i++){
			if( s[i] >= 'A' && s[i] <= 'Z') printf("%c", s[i]+32);
			 else if(s[i] >= 'a' && s[i] <= 'z') printf("%c", s[i]);
		}
		printf("@ptit.edu.vn");
}

// #include<stdio.h>
// #include<string.h>
// int main(){
// 	char a[1000],b[1000];
// 	int d=1,s=0;
// 	gets(a);
// 	b[0]=a[0];
// 	for (int i=1; i<strlen(a); i++){
// 		if(a[i]==' ' && a[i+1]!=' ') s++;
// 	}
// 	for (int i=1; i<strlen(a); i++){
// 		if(a[i]==' ' && a[i+1]!=' ') {
// 			s--;
// 			if (s>0){
// 				b[d]=a[i+1];
// 				d++;
// 			}
// 		}
// 		else if(a[i]!=' ' && s==0){
// 			b[d]=a[i];
// 			d++;
// 		}
// 	}
// 	for (int i=0; i<d; i++){
// 		if(b[i]>64 && b[i]<91) b[i]+=32;
// 		printf("%c",b[i]);
// 	}
// 	printf("@ptit.edu.vn");
// }