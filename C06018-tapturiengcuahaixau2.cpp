#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
    char s1[201], s2[201];
    gets(s1);
    gets(s2);
    char arr1[50][50], arr2[50][50];
    int j = 0, k = 0;
    for(int i = 0; s1[i] != '\0';i++){
        if(s1[i] != ' '){
            arr1[j][k] = s1[i];
            k++;
        }else {
            arr1[j][k] = '\0';
            j++; k = 0;
        }
    }
        arr1[j][k] = '\0'; int sl1 = j;
        j = 0; k = 0;
        for(int i = 0; s2[i] != '\0';i++){
            if(s2[i] != ' '){
                arr2[j][k] = s2[i];
                k++;
            }else {
                arr2[j][k] = '\0';
                j++; k = 0;
        }
        }
        arr2[j][k] = '\0'; int sl2 = j;
        k = 0;
        for(int i = 0; i < sl1+1;i++){
            if(arr1[i][0] != '\0'){
                for(int z = i+1; z < sl1+1;z++){
                    if(strcmp(arr1[i],arr1[z])== 0) arr1[z][0] = '\0';
                }
            }
        }
        for(int i = 0; i < sl1 +1;i++){
            if(arr1[i][0] != '\0'){
                for(int z = 0; z < sl2+1;z++){
                    if(strcmp(arr1[i],arr2[z]) == 0) arr1[i][0] = '\0';
                }
            }
        }
        for(int i = 0; i < sl1+1;i++){
            char doi[50];
            if(arr1[i][0] !='\0'){
                for(int z = i+1; z < sl1 + 1;z++){
                    if(strcmp(arr1[z], arr1[i]) < 0){
                        strcpy(doi, arr1[i]);
                        strcpy(arr1[i],arr1[z]);
                        strcpy(arr1[z],doi);
                    }
                }
             printf("%s ",arr1[i]);
            }
        }
        printf("\n");
    }
}

// #include<stdio.h>
// #include<string.h>

// char ds1[100][50],ds2[100][50]; int n1=0,n2=0,j=0,dem=0;
// int tim(char s[],char ds[100][50],int n){
//     for(int i=dem;i<n;i++)
//         if(strcmp(s,ds[i])==0) return i;
//     return -1;
// }
// void tach1(char s[]){
//     char *p=strtok(s," ");
//     while(p!=NULL){
//         int t = tim(p,ds1,n1);
//         if(t==-1){
//             strcpy(ds1[n1],p); n1++;
//         }
//         p=strtok(NULL," ");
//     }
// }
// void tach2(char s[]){
//     char *p=strtok(s," ");
//     while(p!=NULL){
//         int t = tim(p,ds2,n2);
//         if(t==-1){
//             strcpy(ds2[n2],p); n2++;
//         }
//         p=strtok(NULL," ");
//     }
// }
// void sapxep(char ds[100][50],int n){
//     char tmp[50];
//     for(int e=j;e<n-1;e++){
//         for(int z=e+1;z<n;z++){
//             if(strcmp(ds[e],ds[z])>0){
//                 strcpy(tmp,ds[e]);
//                 strcpy(ds[e],ds[z]);
//                 strcpy(ds[z],tmp);
//             }
//         }
//     }
// }
// main(){
//     int z;
//     scanf("%d",&z);
//     while (z--){
//     	scanf("\n");
//     	char s1[200],s2[200];
// 	    gets(s1); gets(s2);
// 	    tach1(s1); tach2(s2);
// 	    sapxep(ds1,n1);
// 	    for(;j<n1;j++)
// 	        if(tim(ds1[j],ds2,n2)==-1) printf("%s ",ds1[j]);
// 	    dem+=n2;
// 	    printf("\n");
// 	}
// }