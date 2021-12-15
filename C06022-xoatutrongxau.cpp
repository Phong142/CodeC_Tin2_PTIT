#include<stdio.h>
#include<string.h>
#include<ctype.h>

void vietThuong(char c[]){
	int k=strlen(c);
	int i;
	for(i=0;i<k;i++){
		c[i]=tolower(c[i]);
	}
}
int main(){
	int t;
	scanf("%d\n", &t);
	int h = t;
	while(t--){
	char s1[201];
	gets(s1);
	char s2[201];
	gets(s2);
	char arr[100][100];
	char brr[100][100];
	int i = 0, j = 0;
	for(int a = 0; s1[a] != '\0';a++){
		if(s1[a] != ' '){
			brr[i][j] = s1[a];
			j++;
		}
		else{
			brr[i][j] = '\0';
			i++;
			j = 0;
		}
	}
		brr[i][j+1] = '\0';
		j = 0;
	vietThuong(s1);
	vietThuong(s2);
	i = 0, j = 0;
	for(int a = 0; s1[a] != '\0';a++){
		if(s1[a] != ' '){
			arr[i][j] = s1[a];
			j++;
		}
		else{
			arr[i][j] = '\0';
			i++;
			j = 0;
		}
	}
		arr[i][j+1] = '\0';
		j = 0;
		printf("Test %d: ", h-t);
		for(int a = 0; a <= i;a++){
			if(strcmp(arr[a], s2) == 0) continue;
			else printf("%s ", brr[a]);
		}
		printf("\n");
	}
}

// #include<stdio.h>
// #include<string.h>

// char ds[200][200]; 
// int n=0,j=0;

// void tach(char s[]){
// 	char *p=strtok(s," ");
// 	while (p!=NULL){
// 		strcpy(ds[n],p);
// 		n++;
// 		p=strtok(NULL," ");
// 	}
// }

// void change(char s[]){
// 	for (int i=0; i<strlen(s);i++){
// 		if(s[i]>=65 && s[i]<=90) s[i]+=32;
// 	}
// }

// int comp(char s1[],char s2[]){
// 	change (s1);
// 	if (strcmp(s1,s2)==0) return -1;
// 	return 1;
// }

// int main(){
// 	int t;
// 	scanf("%d",&t);
// 	for (int i=1; i<=t; i++){
// 		char s1[1000],s2[100];
// 		scanf("\n");
// 		gets(s1);gets(s2);
// 		printf("Test %d: ",i);
// 		tach(s1);
// 		change(s2);
// 		for (;j<n; j++){
// 			char s3[1000];
// 			strcpy(s3,ds[j]);
// 			if(comp(ds[j],s2)==1) printf("%s ",s3);
// 		}
// 		printf("\n");
// 	}
// }