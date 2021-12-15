#include<stdio.h>
#include<string.h>
int main(){
	char s[50];
	gets(s);
	char arr[50][50];int j=0;int k=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]!=' '){
			arr[j][k]=s[i];
			k++;
		}else{
			arr[j][k]='\0';
			k=0;j++;
		}
	}
	arr[j][k]='\0';
	k=0;
	for(int i=0;i<j+1;i++){
		for(int z=i+1;z<j+1;z++){
		if(strcmp(arr[i],arr[z])==0){
			arr[z][k]='\0';
		}
	}if(arr[i][k]!='\0')printf("%s ",arr[i]);
}}

// #include<stdio.h>
// #include<string.h>

// int main(){
// 	char s[100],ds[1000][1000];
// 	int n=0,b[1000];
// 	while (scanf("%s",s)!=-1) strcpy(ds[n++],s);
// 	for (int i=0; i<n;i++){
// 		if(b[i]!=-1){
// 			for (int j=i+1; j<n; j++){
// 				if(strcmp(ds[i],ds[j])==0){
// 					b[j]=-1;
// 				}
// 			}
// 			printf("%s ",ds[i]);
// 		}
// 	}
// }