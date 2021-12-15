#include<stdio.h>
#include<string.h>
#include<ctype.h>
char email[50][20];int m;
void xuly(char s[], int dem){
    char *p=strtok(s," ");
    char ds[50][50],add[50]="";
    int n=0;
    while(p!=NULL){
        for(int i=0;i<strlen(p);i++) p[i]=tolower(p[i]);
        strcpy(ds[n],p); n++;
        p=strtok(NULL," ");
    }
    strcat(add,ds[n-1]);
    for(int i=0;i<n-1;i++) strncat(add,ds[i],1);
    strcpy(email[dem],add);
}
main(){
    int t,dem=0;
	scanf("%d\n",&t);
	while(t--){
		char s[50];
    	gets(s);
   		xuly(s,dem);
   		int k=0;
   		for(int i=0;i<dem;i++){
   			if(strcmp(email[i],email[dem])==0) k++;
		}
		if(k==0) printf("%s",email[dem]);
		else printf("%s%d",email[dem],k+1);
		printf("@ptit.edu.vn\n");
		dem++;
	}
}

// #include<stdio.h>
// #include<string.h>


// char email[100][100];int n=0;
// void tach(char s[]){
// 	char ds[100][100],cat[100]="";int m=0;
// 	char *p=strtok(s," ");
// 	while (p!=NULL){
// 		strcpy(ds[m],p);
// 		p=strtok(NULL," ");
// 		m++;
// 	}
// 	strcat(cat,ds[m-1]);
// 	for (int i=0; i<m-1; i++){
// 		strncat(cat,ds[i],1);
// 	}
// 	for (int i=0; i<strlen(cat);i++){
// 		if(cat[i]>=65 && cat[i]<=90) cat[i]+=32;
// 	}
// 	strcpy(email[n],cat);
// }

// int main(){
// 	int t;
// 	scanf("%d",&t);
// 	for (int z=0; z<t;z++){
// 		char s[100];
// 		scanf("\n");
// 		gets(s);
// 		tach(s);
// 		n++;
// 		printf("%s",email[z]);
// 		int dem=0;
// 		for (int j=z; j>=0; j--){
// 			if(strcmp(email[z],email[j])==0) dem++;
// 		}
// 		if(dem>1) printf("%d",dem);
// 		printf("@ptit.edu.vn\n");
// 	}
// }