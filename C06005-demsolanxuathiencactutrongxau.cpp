#include <stdio.h>
#include <string.h>
int main()
{
    char s[500];
    gets(s);
    char arrChar[50][50];
    int i = 0, j = 0;
    for (int a = 0; s[a] != '\0'; a++)
    {
        if (s[a] != ' ')
        {
            if (s[a] >= 'A' && s[a] <= 'Z')
            {
                arrChar[i][j] = s[a] + 32;
                j++;
            }
            else
            {
                arrChar[i][j] = s[a];
                j++;
            }
        }
        else
        {
            arrChar[i][j] = '\0';
            i++;
            j = 0;
        }
    }
    arrChar[i][j] = '\0';
    int check[50] = {};
    for (int a = 0; a <= i; a++)
    {
        if (check[a] != 1 && arrChar[a][0] != '\0')
        {
            int count = 1;
            check[a] = 1;
            for (int b = a + 1; b <= i; b++)
            {
                if (strcmp(arrChar[a], arrChar[b]) == 0)
                {
                    count++;
                    check[b] = 1;
                }
            }
            printf("%s %d\n", arrChar[a], count);
        }
    }
}

// #include<stdio.h>
// #include<string.h>

// struct dem{
// 	char ten[100];
// 	int solan;
// }ds[1000];
// int n=0;

// int tim(char s[]){
// 	for (int i=0; i<strlen(s);i++){
// 		if (s[i]>='A'&& s[i]<='Z') s[i]+=32;
// 	}
// 	for (int i=0; i<n; i++){
// 		if(strcmp(ds[i].ten, s)==0) return i;	
// 	}
// 	return -1;
// }

// void tach(char s[]){
// 	char *p=strtok(s," ");
// 	while (p!=NULL){
// 		int t=tim(p);
// 		if(t==-1){
// 			strcpy(ds[n].ten,p);
// 			ds[n].solan=1;
// 			n++;
// 		}
// 		else ds[t].solan++;
// 		p=strtok(NULL," ");
// 	}
// }

// int main(){
// 	char s1[1000];
// 	gets(s1);
// 	tach(s1);
// 	for (int i=0; i<n; i++){
// 		printf("%s %d\n",ds[i].ten,ds[i].solan);
// 	}
// }