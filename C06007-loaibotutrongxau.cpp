#include<stdio.h>
#include<string.h>
int main(){
	char s1[101];
	gets(s1);
	char s2[101];
	gets(s2);
	char arr[50][50];
	int i = 0, j = 0;
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
		arr[i][j] = '\0';
		j = 0;
		for(int a = 0; a <= i;a++){
			if(strcmp(arr[a], s2) == 0) continue;
			else printf("%s ", arr[a]);
		}
	}

// #include<stdio.h>
// #include<string.h>

// void process(char s1[], char s2[]){
// 	char *p= strtok(s1," ");
// 	while (p!=NULL){
// 		if (strcmp(p,s2)) printf("%s ",p);
// 		p=strtok(NULL," ");
// 	}
// }


// int main(){
// 		char s1[1000],s2[100];
// 		scanf("\n");
// 		gets(s1);gets(s2);
// 		process(s1,s2);
	
// }